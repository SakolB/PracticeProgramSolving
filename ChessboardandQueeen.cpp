#include <bits/stdc++.h>
#include <string>
using namespace std;
const int n = 8;
int cnt = 0;
vector<string> board(n);
vector<bool> col(n), diag1(2*n-1), diag2(2*n-1);


bool is_free(int row, int column)
{
    return board[row][column] == '.' && !col[column] && !diag1[row+column] && !diag2[row-column+n-1];
}

void place_queen(int row, int column)
{
    board[row][column] = 'Q';
    col[column] = true;
    diag1[row+column] = true;
    diag2[row-column+n-1] = true;

}

void remove_queen(int row, int column)
{
    board[row][column] = '.';
    col[column] = false;
    diag1[row+column] = false;
    diag2[row-column+n-1] = false;
}

void solve(int row)
{
    if(row == n)
    {
        cnt++;
        return;
    }
    for(int i =0 ; i < n; i++)
    {
        if(is_free(row, i))
        {
            place_queen(row, i);
            solve(row+1);
            remove_queen(row, i);
        }
    }
}
int main()
{
    for(int i =0; i < n; i++)
    {
        cin >> board[i];
    }
    solve(0);
    cout << cnt << endl;
}