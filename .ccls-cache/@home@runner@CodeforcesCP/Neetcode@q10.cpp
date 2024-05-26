// https://neetcode.io/problems/valid-sudoku. couldn't do it

#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>

using namespace std;

int main() {
    vector<vector<char>> sudoku(9, vector<char>(9));
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cin >> sudoku[i][j];
        }
    }

    unordered_map<int, unordered_set<char>> cols;
    unordered_map<int, unordered_set<char>> rows;
    unordered_map<int, unordered_set<char>> squares;  // key = (r / 3) * 3 + c / 3

    for (int r = 0; r < 9; r++) {
        for (int c = 0; c < 9; c++) {
            char cell = sudoku[r][c];
            if (cell == '.') {
                continue;
            }
            if (rows[r].count(cell) || cols[c].count(cell) || squares[(r / 3) * 3 + c / 3].count(cell)) {
                cout << "false" << endl;
                return 0;
            }
            cols[c].insert(cell);
            rows[r].insert(cell);
            squares[(r / 3) * 3 + c / 3].insert(cell);
        }
    }

    cout << "true" << endl;
    return 0;
}


