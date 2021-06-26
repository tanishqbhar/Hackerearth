/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	int n;
	cin >> n;
	int a[n], i, j, m = 0;
	for(i = 0; i < n; i++)	
		cin >> a[i];
	for(i = 0; i < n; i++)
	{
		j = i;
		int c = 0;
		while(a[j] == 1)
		{
			j++;
			c++;
		}
		if(a[j + 1] == 1)
		{
			j++;
			while(a[j] == 1)
			{
				j++;
				c++;
			}
		}
		if(count(a, a + n, 1) > c)
			m = max(c + 1 , m);
		else	
			m = max(m, c);
	//	cout << c << " ";
	}
	cout << m;
	return 0;
}
