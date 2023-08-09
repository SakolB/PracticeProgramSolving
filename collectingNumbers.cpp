#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a;
    //initialize the sweep to 1
    //because at the very least we have to do 1 sweep
    //if the number set is already sorted
    int sweep = 1;
    //store the position of then number in a map of key=number, value=position
    //store previous number default as -1 since 0 is the lowest position we can have
    //in the map and we want something lower to compare in case 1 is at position 0
    //loop through all number from 1 to n;
    //compare the position of i to previous position
    //if the position of i is less than previous position it is not possible to continue
    //in the same sweep therefore increment the sweep and set the previous position to the current one
    //if it is greater than previous position we can collect the number in the same sweep

    map<int, int> position;
    int prev_position = -1;
    for(int i = 0; i < n; i++)
    {
        cin >> a;
        position[a] = i;
    }
    
    for(int i = 1; i <= n; i++)
    {
        if(position[i] > prev_position)
        {
            prev_position = position[i];
        }
        else
        {
            prev_position = position[i];
            sweep++;
        }
    }
    cout << sweep;
}