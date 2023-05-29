#include <iostream>
using namespace std;

int main()
{
    string in;
    getline(cin, in);
    int max = 0;
    int temp = 0;
    char currentCh = '1';
    for(int i = 0; i < in.length(); i++)
    {
        if(currentCh!=in[i])
        {
            currentCh = in[i];
            temp = 1;
        }
        else
        {
            temp++;
        }
        if(temp > max)
        {
            max = temp;
        }
    }
    cout << max;
}