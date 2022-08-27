#include <vector>
#include <iostream>
#include <string>
#include <utility>

using namespace std;

class board {
    const int CARRIER = 5;
    const int BATTLESHIP = 4;
    const int CRUISER = 3;
    const int SUBMARINE = 3;
    const int DESTROYER = 2;

    vector<vector<int>> createOcean() {
        vector<std::vector<int>> ocean;
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                ocean[i][j] = 0;
            }
        }

        return ocean;
    }

    void printOcean(vector<vector<int>> ocean) {
        cout << "\n";
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                cout << ocean[i][j] << " ";
            }
            cout << "\n";
        }
    }

    void attack(vector<vector<int>> ocean) {
        cout << "Attack: ";
    }

    void placeShip(int ship, int head, int tail) {
    }

    pair<int, int> returnCoord(string tile) {
        // Parses a valid input to return the matrix coordinates as a pair of ints
        // Precondition: Input is valid as per isValidInput
        pair<int, int> coordinates;

        coordinates.first = tolower(tile[0]) - 'a';

        if (tile.size() == 3) {
            coordinates.second = 9;
        }
        else {
            coordinates.second = tile[1] - '1'; 
        }

        return coordinates;
    }
        
    int isValidInput(string tile) {
        // Valid: a1, j10, j7, A10, A8
        // Invalid: a 1, k1, b14, c0, b001

        // Size check
        if (tile.size() > 3 || tile.size() < 2) {
            return 0;
        }

        // Row (alphabet) check
        if (!isalpha(tile[0])) {
            return 0;
        }
        else if (tolower(tile[0]) > 'j') {
            return 0;
        }

        // Column (integer) check
        // The only case where an input of size 3 is allowed
        if (tile.size() == 3) {
            if (tile[1] != '1' || tile[2] != '0') {
                return 0;
            }
        }
        else {
            if (!isdigit(tile[1])) {
                return 0;
            }
            else if (tile[1] == '0') {
                return 0;
            }
        }

        return 1;
    }
};