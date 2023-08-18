#include <iostream>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

//use gnu policy base datastructore tree for ordered set
//for performance
//using standard set has Time Limit Exceed
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, k;
    cin >> n >> k;
    ordered_set children;
    for(int i = 1; i <= n; i++)
    {
        children.insert(i);
    }

    //the position of the next child to be selected can be found
    //by the remainder from (k+currentchild position)/n
    //the orderset has a find by order function which return
    //a pointer to the element in the position
    int position = k % n;
    while(!children.empty())
    {
        int child = *children.find_by_order(position);
        children.erase(child);
        if(!children.empty())
        {
            position = (position+k) % children.size();
        }
        cout << child << " ";
        
    }

}
