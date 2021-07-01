/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		char arr[n][n];
		for(int i = 0; i < n; i++)
			for(int j = 0; j < n; j++)
				cin >> arr[i][j];
		int x, y;
		bool found = false;
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < n; j++)
			{
				if(arr[i][j] == '*')
				{
					x = i;
					y = j;
					found = true;
					break;
				}
			}
			if(found)
				break;
		}
		cout << abs(x - n / 2) + abs(y - n / 2) << endl;
	}
	return 0;
}
