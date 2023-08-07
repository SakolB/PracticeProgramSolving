#include <iostream>
#include <map>
using namespace std;
int main()
{
    int n;
    int customer = 0;
    int max = 0;
    //map the int to 1 or 0
    //1 for arriving
    //0 for leaving
    map <int, bool> type;
    cin >> n;
    for(int i =0; i < n; i++)
    {
        int arrival, leaving;
        cin >> arrival >> leaving;
        type[arrival] = 1;
        type[leaving] = 0;  
    }
    for(auto i = type.begin(); i!=type.end(); i++)
        {
            if(i->second)
            {
                customer++;
                if(customer > max)
                {
                    max = customer;
                }
            }
            else
            {
                customer--;
            }
        }
    cout << max;
}
