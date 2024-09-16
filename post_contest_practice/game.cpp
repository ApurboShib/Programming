#include <bits/stdc++.h>
using namespace std;
// Function to display the Tic-Tac-Toe board
void displayBoard(const vector<vector<char>> &board)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
           cout << board[i][j];
            if (j < 2)
            {
               cout << " | ";
            }
        }
       cout <<endl;
        if (i < 2)
        {
            cout << "---------" << std::endl;
        }
    }
    cout << endl;
}

// Function to check if the game is over (win or draw)
bool isGameOver(const vector<vector<char>> &board)
{
    // Check rows and columns for a win
    for (int i = 0; i < 3; i++)
    {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
        {
            return true;
        }
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
        {
            return true;
        }
    }

    // Check diagonals for a win
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
    {
        return true;
    }
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
    {
        return true;
    }

    // Check for a draw
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (board[i][j] == ' ')
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    std::vector<std::vector<char>> board(3, std::vector<char>(3, ' '));
    int row, col;
    char currentPlayer = 'X';

    std::cout << "Welcome to Tic-Tac-Toe!" << std::endl;

    while (true)
    {
        displayBoard(board);

        std::cout << "Player " << currentPlayer << ", enter row (1-3) and column (1-3): ";
        std::cin >> row >> col;

        // Check if the input is valid
        if (row < 1 || row > 3 || col < 1 || col > 3 || board[row - 1][col - 1] != ' ')
        {
            std::cout << "Invalid move. Try again." << std::endl;
            continue;
        }

        board[row - 1][col - 1] = currentPlayer;

        if (isGameOver(board))
        {
            displayBoard(board);
            if (currentPlayer == 'X')
            {
                std::cout << "Player X wins!" << std::endl;
            }
            else
            {
                std::cout << "Player O wins!" << std::endl;
            }
            break;
        }

        // Switch to the other player
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }

    return 0;
}
