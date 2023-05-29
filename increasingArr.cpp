#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    vector<int> a = {1, 2, 3 , 4, 5};
    next_permutation(a.begin(), a.end());
    for(int x = 0 ; x < a.size(); x++)
    {
        cout << a[x] << " ";
    }
}