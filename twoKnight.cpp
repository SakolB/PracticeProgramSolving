 #include <bits/stdc++.h>
 using namespace std;
 int main()
 {
    long n;
    scanf("%ld", &n);
    long result;
    for(long i = 1 ; i <= n ; i++)
    {
        result = (i * i * (i*i - 1) - 8 * (i-1) * (i-2))/2;
        printf("%ld\n", result);
    }
    //Given a chess board of k * k if the first knight occupied one square, then the second knight
    //only has k^2 - 1 place to be on. Since there is 8 squares that the second knight can be attacked
    //by first knight thus there is k^2 - 1 - 8 places possible after the first knight occupied the first square
 }