#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int n;
    cin >> n;
    queue<int> q;
    for(int i = 1; i <=n; i++)
    {
        q.push(i);
    }

    while(!q.empty())
    {
        int temp = q.front();
        q.pop();
        q.push(temp);
        cout << q.front() << " ";
        q.pop();
    }
}