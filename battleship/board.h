#ifndef BOARD_H
#define BOARD_H

#include <vector>
#include <string>
using namespace std;

class Board {
private:
    vector<vector<int>> ocean;

public:
    const int CARRIER = 5;
    const int BATTLESHIP = 4;
    const int CRUISER = 3;
    const int SUBMARINE = 3;
    const int DESTROYER = 2;
    Board();
    void printBoard();
    void attack(vector<vector<int>> ocean);
    void placeShip(int ship, int head, int tail);
    pair<int, int> returnCoord(string tile);
    int isTile(string tile);
    ~Board();
};

#endif // BOARD_H
