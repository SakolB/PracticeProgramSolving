#include <bits/stdc++.h>
using namespace std;
const int maxN = 20;
int n;
long p[maxN];
long solve(int i, long w1, long w2, long total)
{
    if(i == n)
    {
        return abs(w1-w2);
    }
    return min(solve(i+1, w1+p[i], w2, total), solve(i+1, w1, w2+p[i], total));
}
int main()
{
    cin >> n;
    long total = 0;
    for(int i = 0 ; i < n; i++)
    {
        cin >> p[i];
        total+=p[i];
    }
    long answer = solve(0, 0, 0, total);
    cout << answer << endl;
}