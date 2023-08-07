#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;

    //store the map the movie time in the format
    //movieTime[endingTime] = vector<int> startingTime
    //vector is used since endingTime is not guaranteed to be unique
    //this way map will auto sort the endingTime
    //choose the one that has the early ending as possible
    //This is because The longer we wait, the less choice
    //of movie we will have.
    map<int, vector<int> > movieTime;
    int count = 0;
    int currentEndingTime = 0;
    for(int i =0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        movieTime[b].push_back(a);
    }
    // Choose the first one
    // Then compare the value to the value of the next one. 
    //If >= choose increment amount by 1; else go to the next one

    for(auto i = movieTime.begin(); i != movieTime.end(); i++)
    {
        if(i == movieTime.begin())
        {
            currentEndingTime = i->first;
            count++;
        }
        else
        {
            for(int j = 0; j< i->second.size(); j++)
            {
                if(i->second[j] >= currentEndingTime)
                {
                    currentEndingTime = i->first;
                    count++;
                    j = i->second.size();
                }
            }
        }
    }
    cout << count;

}