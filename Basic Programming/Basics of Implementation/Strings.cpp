/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    assert(1 <= t && t <= 50);
    while(t--)
    {
        string n, m;
        cin >> n >> m;
        assert(1 <= (int)n.size() && (int)n.size() <= 10000);
        assert(1 <= (int)m.size() && (int)m.size() <= 10000);
        if((n == m) || (n == "2" && m == "4") || (n == "4" && m == "2"))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
