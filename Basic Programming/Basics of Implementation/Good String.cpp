/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, count = 0;
    string s;
    cin >> s;
    set<char> s1;
    for(i = 0; i < s.length(); i++)
    {
        s1.insert(s[i]);
    }
    cout << s.length() - s1.size();
    return 0;
}
