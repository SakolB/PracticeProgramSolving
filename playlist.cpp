#include <iostream>
#include <map>
using namespace std;

int main()
{
    //solved using sliding windows
    //This is a longest non repeating subsequence problem
    //create a map called played and mark all element to false
    //then use the left and right pointer to slide the windows
    //then start by sliding the ride pointer to the right one by one
    //if an element that the right pointer points to already played
    //a. slide the left pointer to the right pointer position and mark
    //a. the played of the element along the way as false
    //a. mark the current element pointed by the right pointer as played
    //mark the element that the right pointer point to as played
    //check if the maxlength is less than the current window length
    //a. if so set the maxlength to the current window length
    int n;
    cin >> n;
    int a[n];
    map<int, bool> played;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        played[a[i]] = false;
    }

    if(n == 0)
    {
        cout << 0 << endl;
        return 0;
    }
    
    if(n == 1)
    {
        cout << 1 << endl;
        return 0;
    }
    int maxLength = 0;
    int left = 0, right = 0;

    while(right < n)
    {
        if(played[a[right]] == true)
        {
            while(played[a[right]] == true)
            {
                played[a[left]] = false;
                left++;
            }
        }

        played[a[right]] = true;
        maxLength = max(maxLength, (right-left+1));
        right++;
    }
    cout << maxLength << endl;

    

}


