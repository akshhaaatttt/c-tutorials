#include <iostream>
#include <vector>

using namespace std; 

// Function to draw the Tic Tac Toe board
void drawBoard(const vector<char> &board) {
    cout << " " << board[0] << " | " << board[1] << " | " << board[2] << endl;
    cout << "-----------" << endl;
    cout << " " << board[3] << " | " << board[4] << " | " << board[5] << endl;
    cout << "-----------" << endl;
    cout << " " << board[6] << " | " << board[7] << " | " << board[8] << endl;
}

// Function to check for a win
bool checkWin(const vector<char> &board, char player) {
    // Check rows, columns, and diagonals for a win
    return ((board[0] == player && board[1] == player && board[2] == player) ||
            (board[3] == player && board[4] == player && board[5] == player) ||
            (board[6] == player && board[7] == player && board[8] == player) ||
            (board[0] == player && board[3] == player && board[6] == player) ||
            (board[1] == player && board[4] == player && board[7] == player) ||
            (board[2] == player && board[5] == player && board[8] == player) ||
            (board[0] == player && board[4] == player && board[8]
             == player) ||
            (board[2] == player && board[4] == player && board[6] == player));
}

// Function to check if the board is full
bool checkFull(const vector<char> &board) {
    for (char cell : board) {
        if (cell != 'X' && cell != 'O') {
            return false;
        }
    }
    return true;
}

int main() {
    vector<char> board = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
    int choice;
    bool playerTurn = true; // true for player X, false for player O

    while (true) {
        drawBoard(board);

        // Determine current player
        char currentPlayer = (playerTurn) ? 'X' : 'O';

        // Input and validation for player's move
        cout << "Player " << currentPlayer << ", enter your move (1-9): ";
        cin >> choice;

        // Check if the input is valid
        if (choice < 1 || choice > 9 || board[choice - 1] == 'X' || board[choice - 1] == 'O') {
            cout << "Invalid move. Try again." << endl;
            continue;
        }

        // Update board with player's move
        board[choice - 1] = currentPlayer;

        // Check for a win or a draw
        if (checkWin(board, currentPlayer)) {
            drawBoard(board);
            cout << "Player " << currentPlayer << " wins!" << endl;
            break;
        } else if (checkFull(board)) {
            drawBoard(board);
            cout << "It's a draw!" << endl;
            break;
        }

        // Switch to the other player's turn
        playerTurn = !playerTurn;
    }

    return 0;
}
