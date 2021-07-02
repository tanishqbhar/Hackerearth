/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int N, M, T = 0, Ph = 0,  Ch = 1;
		cin >> N >> M;
		int Pdh = M, Cdh = N - 1;
		while(Pdh && Cdh)
		{
			T++;
			int cPh = Ph + min(Pdh, Ch), cCh = Ch + min(Cdh, Ph);
			Pdh -= min(Pdh, Ch);
			Cdh -= min(Cdh, Ph);
			Ph = cPh;
			Ch = cCh;
		}
    if(Cdh)
		  T += (1 + ((Cdh - 1) / Ph));
	cout << T << endl;
	}
	return 0;
}
