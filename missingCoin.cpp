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
    //given a sorted number inside an array
    //the minimum number it cannot produce is the number in the array gap
    //after position i
    //that is equal to 1 + sum(a[0] to a[i])
    for(int i = 0; i < n && a[i] <= min; i++)
    {
        min = min + a[i];
    }
    cout << min;
}