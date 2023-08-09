#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long a[n];
    for(int i = 0; i < n ; i++)
    {
        cin >> a[i];
    }
    sort(a, a+n);
    long long min = 1;
    //this works because if min is greater than a[i] then there is a gap
    //between the sorted array
    for(int i = 0; i < n && a[i] <= min; i++)
    {
        min = min + a[i];
    }
    cout << min;
}