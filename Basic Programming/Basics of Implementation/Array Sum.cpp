/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;

int main() 
{
    long long int n ,t, ans = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> t;
        ans += t;
    }
    cout << ans;
}
