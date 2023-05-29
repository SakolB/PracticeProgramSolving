#include <bits/stdc++.h>
#include <string>

using namespace std;

int main()
{
    string s;
    unordered_map<char, string> letter;
    cin >> s;
    string first = "", odd = "", last ="";
    for(char c: s)
    {
        letter[c]+=c;
    }
    for(auto i:letter)
    {
        if(i.second.length()%2 == 1 && odd !="")
        {
            cout << "NO SOLUTION";
            return 0;
        }
        else if(i.second.length()%2 == 1)
        {
            odd = i.second;
        }
        else
        {
            first = i.second.substr(0, i.second.length()/2) + first;
            last += i.second.substr(0, i.second.length()/2);
        }
        
    }
    cout << first << odd << last;
    
    

}