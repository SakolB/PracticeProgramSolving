#include <bits/stdc++.h>
using namespace std;
void move(int n, int src, int dest, int other, vector<pair<int, int>> &a);
void moveto(int src, int dest, vector<pair<int, int>> &a);
int main()
{
    int n;
    scanf("%d", &n);
    vector<pair<int,int>> a;
    move(n, 1, 3, 2, a);
    cout << a.size() << endl;
    for(pair<int,int> m : a)
    {
        cout << m.first << " " << m.second << endl;
    }
    

}

void move(int n, int src, int dest, int other, vector<pair<int, int>> &a)
{
    if(n == 1)
    {
        moveto(src, dest, a);
    }
    else
    {
        move(n-1, src, other, dest, a);
        moveto(src, dest, a);
        move(n-1, other, dest, src, a);
    }

}

void moveto(int src, int dest, vector<pair<int, int>> &a)
{
    pair<int, int> m(src, dest);
    a.push_back(m);
}