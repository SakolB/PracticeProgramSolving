#include <iostream>
#include <map>
#include <set>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    //initialize the sweep to 1
    //because at the very least we have to do 1 sweep
    //if the number set is already sorted
    int a[n];
    int sweep = 1;
    //store the position of then number in a array of position[key]=number
    //store previous number default as -1 since 0 is the lowest position we can have
    //in the array and we want something lower to compare in case 1 is at position 0
    //loop through all number from 1 to n;
    //compare the position of i to previous position
    //if the position of i is less than previous position it is not possible to continue
    //in the same sweep therefore increment the sweep and set the previous position to the current one
    //if it is greater than previous position we can collect the number in the same sweep

    int position[n+1];
    int prev_position = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        position[a[i]] = i+1;
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

    //in each move swap the original array number
    //and the position array number between the 2 elements that
    //are swap
    //then check the left side of the swapped element compare to the old one
    //also check the right side of the swapped element compare to the old one
    //if they position reverse from increase to decrease or decrease to increase
    //make appropriate change to the number of sweep
    for(int i = 0 ; i < m ; i++)
    {
        int x, y;
        cin >> x >> y;
        x--;
        y--;
        swap(a[x], a[y]);
        swap(position[a[x]], position[a[y]]);

        if((a[x]-1)>0 && position[a[x]] > position[a[x]-1] && position[a[y]] <= position[a[x]-1]) sweep--;
        if((a[x]+1)<=n && position[a[x]] > position[a[x]+1] && position[a[y]] <= position[a[x]+1]) sweep++;
        if((a[x]-1)>0 && position[a[x]] < position[a[x]-1] && position[a[y]] >= position[a[x]-1]) sweep++;
        if((a[x]+1)<=n && position[a[x]] < position[a[x]+1] && position[a[y]] >= position[a[x]+1]) sweep--;
        if((a[y]-1)>0 && position[a[y]] > position[a[y]-1] && position[a[x]] < position[a[y]-1]) sweep--;
        if((a[y]+1)<=n && position[a[y]] > position[a[y]+1] && position[a[x]] < position[a[y]+1]) sweep++;
        if((a[y]-1)>0 && position[a[y]] < position[a[y]-1] && position[a[x]] > position[a[y]-1]) sweep++;
        if((a[y]+1)<=n && position[a[y]] < position[a[y]+1] && position[a[x]] > position[a[y]+1]) sweep--;
        cout << sweep << endl;

        

    }
}