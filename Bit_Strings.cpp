#include <bits/stdc++.h>
using namespace std;
const int MOD = 1000000007;
int main()
{
    long long int n;
    scanf("%lld", &n);
    long long int result = 1;
    for(int i = 1; i <= n; i++)
    {
        result = (result * 2) % MOD;
    }
    cout << result << endl;
    return 0;

}

