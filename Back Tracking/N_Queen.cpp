#include <iostream>
#include <vector>
using namespace std;

int n;

bool safe(vector<string>& board, int row, int col) {
    for (int i = 0; i < row; i++) {
        if (board[i][col] == 'Q')
            return false;
    }

    for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j] == 'Q')
            return false;
    }

    for (int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++) {
        if (board[i][j] == 'Q')
            return false;
    }

    return true;
}

bool solve(vector<string>& board, int row) {
    if (row == n)
        return true;

    for (int col = 0; col < n; col++) {
        if (safe(board, row, col)) {
            board[row][col] = 'Q';

            if (solve(board, row + 1))
                return true;

            board[row][col] = '.';
        }
    }

    return false;
}

int main() {
    cin >> n;

    vector<string> board(n, string(n, '.'));

    if (solve(board, 0)) {
        for (int i = 0; i < n; i++)
            cout << board[i] << endl;
    } else {
        cout << "No solution";
    }

    return 0;
}