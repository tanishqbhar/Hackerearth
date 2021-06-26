/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n, h, a, c, k, e, r, t, m;
    string s;
    cin >> n >> s;
    h = count(s.begin(), s.end(), 'h');
    a = count(s.begin(), s.end(), 'a');
    c = count(s.begin(), s.end(), 'c');
    k = count(s.begin(), s.end(), 'k');
    e = count(s.begin(), s.end(), 'e');
    r = count(s.begin(), s.end(), 'r');
    t = count(s.begin(), s.end(), 't');
    h /= 2;
    e /= 2;
    a /= 2;
    r /= 2;
    m = min(min(min(h, a), t) ,min(min(c, k), min(e, r)));
    cout << m;
    return 0;
}
