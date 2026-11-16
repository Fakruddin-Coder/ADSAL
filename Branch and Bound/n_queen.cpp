#include <iostream>
#include <vector>
using namespace std;

int N;
vector<int> board;
vector<bool> columns, diagonal1, diagonal2;

bool solveNQueen(int row) {
    if (row == N)
        return true;

    for (int col = 0; col < N; col++) {
        if (!columns[col] &&
            !diagonal1[row - col + N - 1] &&
            !diagonal2[row + col]) {

            // Place queen
            board[row] = col;
            columns[col] = true;
            diagonal1[row - col + N - 1] = true;
            diagonal2[row + col] = true;

            if (solveNQueen(row + 1))
                return true;

            // Backtrack
            columns[col] = false;
            diagonal1[row - col + N - 1] = false;
            diagonal2[row + col] = false;
        }
    }

    return false;
}

int main() {
    cout << "Enter the value of N: ";
    cin >> N;

    if (N <= 0) {
        cout << "N must be positive.\n";
        return 0;
    }

    board.resize(N);
    columns.resize(N, false);
    diagonal1.resize(2 * N - 1, false);
    diagonal2.resize(2 * N - 1, false);

    if (solveNQueen(0)) {
        cout << "\nSolution:\n";

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (board[i] == j)
                    cout << "Q ";
                else
                    cout << ". ";
            }
            cout << endl;
        }
    } else {
        cout << "No solution exists for N = " << N << endl;
    }

    return 0;
}


