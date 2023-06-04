#include <bits/stdc++.h>
using namespace std;
//Solution is to sort the childWeight and then pair the heaviest with the smallest
//without having it exceed the target
//if it does take the heaviest child and give its it's own gondolas

int main()
{
    int n, target;
    cin >> n >> target;
    vector<int> childrenWeight;
    int childWeight;
    map<int, bool> haveGondolasYet;
    for(int i = 0 ; i < n; i++)
    {
        cin >> childWeight;
        if(childWeight <= target)
        {
            childrenWeight.push_back(childWeight);
            haveGondolasYet[i] = false;
        }
        
    }
    sort(childrenWeight.rbegin(), childrenWeight.rend());
    int gondolas = 0;
    
    int i = 0;
    int j = childrenWeight.size()-1;
    while(i<j)
    {
        if(childrenWeight[i] + childrenWeight[j] > target)
        {
            haveGondolasYet[i] = true;
            gondolas++;
            i++;
        }
        else
        {
            haveGondolasYet[i] = true;
            haveGondolasYet[j] = true;
            gondolas++;
            i++;
            j--;
        }
    }
    
    for(map<int, bool>::iterator i = haveGondolasYet.begin(); i!= haveGondolasYet.end(); i++)
    {
        if(i->second!= true)
        {
            gondolas++;
        }
    }
    cout << gondolas;
}

// There are n
//  children who want to go to a Ferris wheel, and your task is to find a gondola for each child.

// Each gondola may have one or two children in it, and in addition, the total weight in a gondola may not exceed x
// . You know the weight of every child.

// What is the minimum number of gondolas needed for the children?

// Input

// The first input line contains two integers n
//  and x
// : the number of children and the maximum allowed weight.

// The next line contains n
//  integers p1,p2,…,pn
// : the weight of each child.

// Output

// Print one integer: the minimum number of gondolas.

// Constraints
// 1≤n≤2⋅105

// 1≤x≤109

// 1≤pi≤x

// Example

// Input:
// 4 10
// 7 2 3 9

// Output: 3


