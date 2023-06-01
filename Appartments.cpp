#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, k;
    vector<int> desiredSize;
    vector<int> appSize;
    cin >> n >> m >> k;
    int temp;
    for(int i =0; i < n; i++)
    {
        cin >> temp;
        desiredSize.push_back(temp);
    }
    for(int i = 0 ; i < m; i++)
    {
        cin >> temp;
        appSize.push_back(temp);
    }
    
    sort(desiredSize.begin(), desiredSize.end());
    sort(appSize.begin(), appSize.end());
    int match = 0;
    int index = 0;
    int restartIndex = -1;
    for(int i = 0 ; i < desiredSize.size(); i++)
    {
        bool flag = true;
        while(flag)
        {
            if(appSize[index] >= desiredSize[i]-k && appSize[index] <= desiredSize[i]+k)
            {
                match++;
                flag = false;
                restartIndex = index;
                //cout << "desiredSize:" << desiredSize[i] << ", appSize:" << appSize[index] << endl; 
            }
            
            if(index == appSize.size()-1 || appSize[index] > desiredSize[i]+k)
            {
                flag = false;
                index = restartIndex;
            }
            index++;
        }
        if(restartIndex == appSize.size()-1)
        {
            break;
        }
    }
    cout << match;
}