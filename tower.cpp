#include <iostream>
#include <set>
using namespace std;

int main()
{
    //use multiset allow for duplication
    //and upperbound function which return
    //the first element that is higher
    //and closest to the arguement
    //the multiset will store the current
    //top value of the existing tower
    multiset<int> towerTopVal;
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    //iterate through the array
    //if the multiset is empty insert the element in
    //if it is not
    //make an iterator that point to the closest element that is
    //higher than the current array element
    //if there are no such element than insert the current element in
    //the multi set
    //else erase the old value that the iterator point to
    //and insert a new one
    //at the end the count of the element of the set is the
    //amount of tower needed
    for(int i = 0; i < n; i++)
    {
        if(towerTopVal.size() == 0)
        {
            towerTopVal.insert(a[i]);
        }
        else
        {
            multiset<int>::iterator it = towerTopVal.upper_bound(a[i]);
            if(it == towerTopVal.end())
            {
                towerTopVal.insert(a[i]);
            }
            else
            {
                towerTopVal.erase(it);
                towerTopVal.insert(a[i]);
            }
        }
    }
    cout << towerTopVal.size();

}