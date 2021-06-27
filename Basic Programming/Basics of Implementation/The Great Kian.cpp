/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
long long x[3];

int main()
{
	ios_base::sync_with_stdio(false);
	int n, a;
	cin >> n;
	for(int i = 0; i < n; ++i)
	{
		cin >> a;
		x[i % 3] += (long long)a;
	}
	for(int i = 0; i < 3; ++i)
		cout << x[i] << ' ';
	cout << endl;
	return 0;
}
