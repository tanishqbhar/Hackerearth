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
	int t;
    cin >> t;
    assert(1 <= t && t <= 10);
    while(t--)
    {
        string s;
        cin >> s;
        int n = (int)s.size() , i;
        int ans = 0 , pre = -1;
        assert(1 <= n && n <= 100000);
        for(i = 0; i < n; i++)
        	assert(s[i] == 'B' || s[i] == 'W');
        for(i = 0; i < n; i++)
        {
            if(s[i] == 'B')
            {
            	if(pre == -1)
            		ans += min(2, i);
            	else
            		ans += min(4, i - pre - 1);
            	pre = i;
            }
        }
        if(pre != -1)
        	ans += min(2, n - pre - 1);
        cout << ans << endl;
    }
    return 0;
}
