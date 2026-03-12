#include <bits/stdc++.h>
using namespace std;

bool isSafe(vector<vector<int>>& board, int row, int col, int num)
{
    for(int x = 0; x < 9; x++)
        if(board[row][x] == num)
            return false;

    for(int x = 0; x < 9; x++)
        if(board[x][col] == num)
            return false;

    int startRow = row - row % 3;
    int startCol = col - col % 3;

    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            if(board[i + startRow][j + startCol] == num)
                return false;

    return true;
}

bool solveSudoku(vector<vector<int>>& board)
{
    int row, col;
    bool empty = false;

    for(row = 0; row < 9; row++)
    {
        for(col = 0; col < 9; col++)
        {
            if(board[row][col] == 0)
            {
                empty = true;
                break;
            }
        }
        if(empty) break;
    }

    if(!empty)
        return true;

    for(int num = 1; num <= 9; num++)
    {
        if(isSafe(board, row, col, num))
        {
            board[row][col] = num;

            if(solveSudoku(board))
                return true;

            board[row][col] = 0;
        }
    }

    return false;
}

void printBoard(vector<vector<int>>& board)
{
    for(int i = 0; i < 9; i++)
    {
        for(int j = 0; j < 9; j++)
            cout << board[i][j] << " ";
        cout << endl;
    }
}

int main()
{
    vector<vector<int>> board(9, vector<int>(9));

    cout << "Enter Sudoku grid (0 for empty cells):\n";

    for(int i = 0; i < 9; i++)
        for(int j = 0; j < 9; j++)
            cin >> board[i][j];

    if(solveSudoku(board))
    {
        cout << "Solved Sudoku:/n";
        printBoard(board);
    }
    else
        cout << "No solution exists";

    return 0;
}