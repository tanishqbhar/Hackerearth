/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, a, b, sit = 0, ans = 0;
    cin >> n >> m;
    for(int i = 1; i < n; ++i)
    {
	    cin >> a >> b;
	    sit += a-b;
	    if(sit >= m)
	        ans++;
    }
    cout << ans;	
}
