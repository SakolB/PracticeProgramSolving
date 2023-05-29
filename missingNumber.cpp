#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int a;
    cin >> a;
    bool exist[a] = {false};
    for(int i =0; i < a-1; i++)
    {
        int b;
        cin >> b;
        exist[b-1] = true;
    }
    for(int i =0; i < a; i++)
    {
        if(exist[i] == false)
        {
            cout << i+1;
            break;
        }
    }
    return 0;

}