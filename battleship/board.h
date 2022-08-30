#ifndef BOARD_H
#define BOARD_H

#include <vector>
#include <string>
using namespace std;

class Board {
public:
    vector<vector<char>> ocean;

    /*
    const char CARRIER = 'A';
    const char BATTLESHIP = 'B';
    const char CRUISER = 'C';
    const char SUBMARINE = 'S';
    const char DESTROYER = 'D';
    */
    
    // Constructor
    Board();
    
    // Prints this board.
    void printBoard();

    // Unfinished.
    int spawnShip(char ship, pair<int, int> head, pair<int, int> tail);

    // Unfinished.
    void autoSpawnShips();

    // Returns true if a ship has been placed here, false otherwise.
    bool isOccupied(pair <int, int> tile);

    // Converts valid tile input to pair<int, int>.
    pair<int, int> returnCoord(string tile);

    // Destructor
    ~Board();
};

#endif // BOARD_H
