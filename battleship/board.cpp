#include <iostream>
#include "board.h"

Board::Board() {
    vector<char> empty;
    for (int i = 0; i < 10; i++) {
        ocean.push_back(empty);
        for (int j = 0; j < 10; j++) {
            ocean[i].push_back('~');
        }
    }
}

void Board::printBoard() {
    // Prints the board.
    cout << "\n";
    cout << "  0 1 2 3 4 5 6 7 8 9" << "\n";
    for (int i = 0; i < 10; i++) {
        cout << (char) ('A' + i) << " ";
        for (int j = 0; j < 10; j++) {
            cout << ocean[i][j] << " ";
        }
        cout << "\n";
    }
}

void Board::autoSpawnShips() {
}

int Board::spawnShip(char ship, pair<int,int> head, pair<int,int> tail) {

    if (head.first != tail.first && head.second != tail.second) {
        return 0;
    }

    int length;
    switch (ship) {
        case 'A':
            length = 5;
            break;
        case 'B':
            length = 4;
            break;
        case 'C':
            length = 3;
            break;
        case 'S':
            length = 3;
            break;
        case 'D':
            length = 2;
            break;
    }
    
    
    return 1;
}

bool Board::isOccupied(pair <int, int> tile) {
    return (ocean[tile.first][tile.second] != '~');
}

pair<int, int> Board::returnCoord(string tile) {
    // Parses a valid input to return the matrix coordinates as a pair of ints
    // Precondition: Input must be valid as per isTile
    pair<int, int> coordinates;

    coordinates.first = tolower(tile[0]) - 'a';
    coordinates.second = tile[1] - '0';

    return coordinates;
}

Board::~Board() {

}