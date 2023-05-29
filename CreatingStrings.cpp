#include <bits/stdc++.h>
using namespace std;


set<string> allpossibleString(string s);

int main()
{
    string s;
    cin >> s;
    set<string> answer = allpossibleString(s);
    cout << answer.size() << endl;
    for(string s: answer)
    {
        cout << s << endl;
    }

}

set<string> allpossibleString(string s)
{
    if(s.empty())
    {
        return {" "};
    }

    set<string> result;
    for(int i = 0; i < s.size(); i++)
    {
        string remaining_chars = s.substr(0, i) + s.substr(i+1);
        for(string st: allpossibleString(remaining_chars))
        {
            result.insert(s[i] + st);
        }
    }
    return result;
}