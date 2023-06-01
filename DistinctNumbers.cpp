#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map<int, int> m;
    int a;
    int d = 0;
    for(int i = 0 ; i < n; i++)
    {
        
        cin >> a;
        if(m[a]==0)
        {
            d++;
            m[a]=1;
        }
    }
    cout << d;
}