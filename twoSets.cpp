#include <bits/stdc++.h>
using namespace std;

int main()
{
    long n;
    vector<long> a;
    vector<long> b;
    scanf("%ld", &n);
    long sum = (n*(n+1))/2;
    if((sum/2)*2 != sum)
    {
        printf("NO\n");
    }
    else
    {
        for(long i = 1; i <= n; i++)
        {
            a.push_back(i);
        }
        long target = sum/2;
        
        long i = a.size();
        while(target != 0)
        {
            if(i <= target)
            {
                
                target = target - i;
                a.erase(a.begin()+(i-1));
                b.push_back(i);
            }
            i--;

        }
        printf("YES\n");
        printf("%d\n", (int)a.size());
        for(long i = 0 ; i < a.size(); i++)
        {
            printf("%ld ", a[i]);
        }
        printf("\n");
        printf("%d\n", (int)b.size());
        for(long i = 0 ; i < b.size(); i++)
        {
            printf("%ld ", b[i]);
        }
    }
}