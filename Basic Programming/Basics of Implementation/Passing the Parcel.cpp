/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n;
    string s;
    cin >> n >> s;
    queue<int> q;
    for(int i = 0; i < n; i++)
        q.push(i + 1);
    n = s.length();
    int i = 0;
    while(q.size() > 1)
    {
        int x = q.front();
        q.pop();
        if(s[i % n] == 'a')
            q.push(x);
        i++;
    }
    cout << q.front();
}
