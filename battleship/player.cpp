#include <iostream>
#include "player.h"
#include "board.h"


void attackTile(vector<vector<char>> ocean) {
    string x;
    while (!isTile(x)) {
        cout << "Please enter a valid tile to attack." << "\n";
        cout << "Attack: ";
        cin >> x;
    }
    cout << "Miss!";
}

bool isTile(string tile) {
    // Valid: a1, j0, j7, A0, A8
    // Invalid: a 1, k1, b14, b001, a, 1

    // Size check
    if (tile.size() != 2) {
        return false;
    }

    // Row (alphabet) check
    if (!isalpha(tile[0])) {
        return false;
    }
    else if (tolower(tile[0]) > 'j') {
        return false;
    }

    // Column (integer) check
    if (!isdigit(tile[1])) {
        return false;
    }

    return true;
}

