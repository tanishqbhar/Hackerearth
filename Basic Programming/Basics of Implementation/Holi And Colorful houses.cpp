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
    cin.tie(NULL);
    cout.tie(NULL);
    int t, n, q;
    cin >> t;
    while(t--)
    {
        cin >> n >> q;
        string s;
        cin >> s;
        int a[n] = {0}, c = 0, i;
        for(i = 1; i < n; i++)
        {
            if(s[i - 1] != s[i])
            	c++;
            a[i] = c;
        }
        if(s[0] != s[n - 1])
        	c = 1;
        else
        	c = 0;
        while(q--)
        {
            int x, y, ans;
            cin >> x >> y;
            if(x == y)
            cout << "0" << endl;
            else if(x < y)
            {
				ans = min(abs(a[y - 1] - a[x - 1]), abs(a[x - 1] + a[n - 1] - a[y - 1] + c));
            cout << ans << endl;
			}
            else
            {
                ans = min(abs(a[x - 1] - a[y - 1]), abs(a[n - 1] - a[x - 1] + a[y - 1] + c));
                cout << ans << endl;
            }
        }
    }
}
