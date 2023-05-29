#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b;
    scanf("%d", &n);
    for(int i = 0 ; i < n; i++)
    {
        scanf("%d %d", &a, &b);
        if((a+b) % 3 == 0)
        {
           if(a < b/2 || b < a/2)
           {
                printf("NO\n");
           }
           else
           {
                printf("YES\n");
           }
        }
        else
        {
            printf("NO\n");
        }
    }
}