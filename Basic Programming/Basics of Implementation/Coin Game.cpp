/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t, n, i;
	cin >> t;
	while(t--)
	{
		cin >> n;
		int a[n], cnt = 0;
		for(i = 0; i < n; i++)
			cin >> a[i];
		for(i = 0; i < n; i++)
			while(a[i] % 2 == 0)
				a[i] /= 2, cnt += 1;
		if(cnt % 2 == 0)
			cout << "Alan" << endl;
		else
			cout << "Charlie" << endl;
	}
	return 0;
}
