#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
using namespace std;
int search(int [], int, int);
int main()
{
    int n, target;
    map<int, vector<int> > position;
    cin >> n >> target;

    //Put the element in a map
    //with the value of a vector of its position
    //This is for instance lookup upon finding require
    //loop through array
    //take the target and subtract it by the element
    //require is the remain
    //find its position using map for faster lookup
    if(n == 1)
    {
        cout << "IMPOSSIBLE";
        return 0;
    }
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        position[a[i]].push_back(i);
    }

    for(int i = 0 ; i < n; i++)
    {
        int require = target - a[i];
        if(require > 0)
        {
            if(position[require].empty())
            {
                continue;
            }
            else
            {
                if(i+1 != position[require][0] + 1)
                {
                    cout << i+1 << " " << position[require][0] + 1;
                    break;
                }
            }
        }
    }
    cout << "IMPOSSIBLE" << endl;
    return 0;
}
