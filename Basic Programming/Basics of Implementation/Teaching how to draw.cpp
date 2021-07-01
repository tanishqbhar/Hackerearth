/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;

int main()
{
   	int T, N;
    cin >> T;
    while(T--)
	{
        cin >> N;
        int i = 1, ans = 0;
        while(N / i >= i)               // loop until root of N
		{                             
            ans += N / i - (i - 1);     // subtract the repeated traingles
            i++;
        }
        cout << ans << endl;
    }
    return 0;
}
