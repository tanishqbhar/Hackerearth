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
    cin.tie(0); cout.tie(0);
    long long int t;
    cin >> t;
    while(t--)
	{
        long long int n, ans = 0, i = 1;
        cin >> n;
        while(i <= sqrt(n))
		{
            i *= 2;
            if(n / i >= i / 2)
                ans = n - n / i;
            else
                ans = (n - (i / 2)) + 1;
        }
        cout << ans << endl;
 }
