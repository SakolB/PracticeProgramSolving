#include <iostream>
#include <set>
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int x, n;
    cin >> x >> n;
    int p;


    //we have set that store traffic light position because
    //position is guaranteed to be unique
    //we have a multiset that store distances between the lights
    //since distances is not guaranteed to be unique
    //then we have an iterator called right which will
    //point to the element that is first next larger postion
    //to the right of the inserted position
    //since we have not inserted the position yet
    //the pointer one below that will point to the
    //next first next lower positin to the left
    //of the inserted position
    //since we insert a new position
    //the old distance between the two
    //that got split need to be erase
    //then we inserted the two new distances
    //that was created from the newly inserted light
    //after that insert the new position
    //since set is auto sorted, the last element of the set
    //will be the largest distance.
    
    set <int> trafficLight;
    multiset<int> distance;
    trafficLight.insert(0);
    trafficLight.insert(x);
    distance.insert(x);
    for(int i = 0; i < n; i++)
    {
        cin >> p;
        set<int>::iterator right = trafficLight.upper_bound(p);
        set<int>::iterator left = right;
        left--;

        distance.erase(distance.find(*right - *left));
        distance.insert(*right - p);
        distance.insert(p - *left);

        trafficLight.insert(p);
        multiset<int>::iterator maxPointer = distance.end();
        --maxPointer;
        cout << *maxPointer << " ";
    }


}
