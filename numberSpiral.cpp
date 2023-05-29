#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long y;
    long x;
    int t;
    long value;
    cin >> t;
    for(int i = 0 ; i < t; i++)
    {
        cin >> y >> x;
        if(x == y)
        {
            value = x*x - x+1;
        }
        else if(y > x)
        {
            if(y % 2 == 1)
            {
                value = (y-1)*(y-1) + x;
            }
            else
            {
                value = y*y - x + 1;
            }
        }
        else
        {
            if(x % 2 == 0)
            {
                value = (x-1)*(x-1) + y;
            }
            else
            {
                value = x*x - y + 1;
            }
        }
        cout << value << endl;
    }
}