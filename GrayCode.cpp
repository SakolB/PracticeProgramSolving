#include <bits/stdc++.h>
using namespace std;

void GrayCode(int n, vector<string>& grayCode);
int main()
{
    int n;
    scanf("%d", &n);
    vector<string> G;
    GrayCode(n, G);
    for(string s: G)
    {
        cout << s << endl;
    }

}
//n bit Gray code can be generated using the previous n-1 bit list of greycode
//This can be done by creating two copy of the n-1 bit list of gray code
//then reverse one of them
//append 0 infront of all of the nonreversed list
//append 1 infront of all the reversed list
//merge the two lists togther letting the one started with 0 first      
void GrayCode(int n, vector<string>& grayCode)
{
    if(n == 1)
    {
        grayCode.push_back("0");
        grayCode.push_back("1");
    }
    else
    {
        GrayCode(n-1, grayCode);
        vector<string> L1 = grayCode;
        vector<string> L2 = grayCode;
        reverse(L2.begin(), L2.end());
        grayCode.clear();
        for(int i = 0 ; i < L1.size(); i++)
        {
            grayCode.push_back('0' + L1[i]);
            
        }
        for(int i = 0 ; i < L2.size(); i++)
        {
            grayCode.push_back('1' + L2[i]);
        }
        
        
    }
}