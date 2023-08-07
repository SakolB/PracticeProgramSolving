#include <iostream>
#include <string.h>
using namespace std;
int count(int, int, int);
int dx[4] = {0, 0, 1, -1};
int dy[4] = {-1, 1, 0, 0};
bool grid[9][9] = {false};
int p[48];
int main()
{
    string input;
    
    for(int i = 0 ; i < 9; i++)
    {
        grid[i][0] = true;
        grid[0][i] = true;
        grid[i][8] = true;
        grid[8][i] = true;
    }
    cin >> input;
    for(int i = 0; i < 48; i++)
    {
        if(input[i] == 'U')
        {
            p[i] = 0;
        }
        else if(input[i] == 'D')
        {
            p[i] = 1;
        }
        else if(input[i] == 'R')
        {
            p[i] = 2;
        }
        else if(input[i] == 'L')
        {
            p[i] = 3;
        }
        else
        {
            p[i] = 4;
        }
    }
    int x = 1;
    int y = 1; 
    int move = 0;
    int ans = count(move, x, y);
    cout << ans;
    
}
int count(int n, int x, int y)
{
    //check if the left and the right is occupied and the up and down is not
    if((grid[y][x-1] && grid[y][x+1]) && (!grid[y+1][x] && !grid[y-1][x]))
    {
        return 0;
    }

    //check if up and down is occupied and left right is not
    if((grid[y-1][x] && grid[y+1][x]) && (!grid[y][x+1] && !grid[y][x-1]))
    {
        return 0;
    }

    if(x == 1 && y == 7)
    {
        if(n == 48)
        {
            return 1;
        }
        return 0;
    }

    if(n == 48)
    {
        return 0;
    }


    int ret = 0;
    grid[y][x] = true;


    if(p[n] < 4)
    {
        int nextX = x + dx[p[n]];
        int nextY = y + dy[p[n]];
        if(!grid[nextY][nextX])
        {
            ret += count(n+1, nextX, nextY);
        }
    }
    else
    {
        for(int i = 0; i < 4; i++)
        {
            int nextX = x + dx[i];
            int nextY = y + dy[i];
            if(grid[nextY][nextX])
            {
                continue;
            }
            ret += count(n+1, nextX, nextY);
        }
    }
    grid[y][x] = false;
    return ret;
}
