/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
int counter[100005];

int main()
{
	for (int g = 1; g <= 100000; g++)
	{
		for (int y = 0; y < 20; y++)
		{
			if (((1 << y) & g) && (!((1 << (y + 1)) & g)) && ((1 << (y + 2)) & g))
                counter[g]++; 
		}
	}
	int T; 
    cin >> T; 
	for (int g = 0; g < T; g++)
	{
		int R,K;
        cin >> R >> K; 
		int ans=0; 
		for (int y = 1; y <= R; y++)
			ans += (counter[y] >= K);
		cout << ans << endl; 
	}
	return 0; 
}
