#include <bits/stdc++.h>
using namespace std;

int main()
{   
    //To calculate the number of trailing zeroes in the factorial n!,
    // we need to determine the number of factor of 10 in the factorial expressions.
    //Since 10 can be factored as 2 * 5, we need to count the number of pairs of 2 and 5
    //factors.
    //Here's the algorithm to calculate the number of trailing zeros:
    //1. Read the input integer n.
    //2. Initialize a variable count to 0.
    //3. For each power of 5 less than or equal to n:
    //4. Divide n by 5 and add the quotient to count.
    //5. Print the value of count.
    //This algorithm works because there will always be more factors of 2 
    //than factors of 5 in any factorial expression. 
    //So, counting the number of factors of 5 is sufficient to determine the 
    //number of trailing zeros.
    int n;
    scanf("%d", &n);
    int count = 0;
    int power_of_five = 5;
    while(power_of_five <= n)
    {
        count += n/power_of_five;
        power_of_five *=5; 
    }
    printf("%d", count);
    return 0;
    
}