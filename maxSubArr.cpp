#include <iostream>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long a[n];
    long long max_sum;
    for(long long i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    long long currentSum = a[0];
    max_sum = currentSum;
    for(long long i = 1; i < n; i++)
    {
        currentSum = max(a[i], currentSum+a[i]);
        max_sum = max(currentSum, max_sum);
        
    }
    cout << max_sum;
    
}
