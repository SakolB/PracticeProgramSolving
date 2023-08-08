#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long a[n];
    long long sum = 0;
    for(int i = 0 ; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a+n);
    long long median = (a[n/2]);
    long long cost = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i] != median)
        {
            cost+= abs(median-a[i]);
        }
    }
    cout << cost;
}

