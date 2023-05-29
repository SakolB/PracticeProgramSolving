#include <bits/stdc++.h>
using namespace std;


int main()
{
    int q;
    cin >> q;
    while(q--)
    {
        long long k;
        cin >> k;
        long long digits = 1;
        long long numbers = 9;
        long long start = 1;
        while(k > digits * numbers)
        {
            k -= digits * numbers;
            digits++;
            numbers *= 10;
            start *= 10;

        }
        start += (k-1) / digits;
        string s = to_string(start);
        cout << s[(k-1)%digits] << endl;
    }
}