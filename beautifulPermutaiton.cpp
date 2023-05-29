#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if(n==2 | n == 3)
    {
        cout << "NO SOLUTION\n";
        return 0;
    }

    for(int i = 1 ; i <= n ; i++)
    {
        if(i <= n/2)
        {
            cout << i * 2 << " ";
        }
        else
        {
            cout << (i - n/2) * 2 - 1 << " ";
        }
    }
}