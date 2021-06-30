/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	string s;
	cin >> s;
	vector<int> f(26, 0);
	for(char c:s)
		f[c - 'a']++;
	int odd = 0;
	for(int i = 0; i < 26; i++)
	{
		if(f[i] & 1)
			odd++;
	}
	if(odd > 1)
		cout << -1 << endl;
	else
	{
		string nw;
		int midodd = -1;
		for(int i = 0; i < 26; i++)
		{
			if(f[i] & 1)
				midodd = i;	
			string add(f[i]/2, (char)i + 'a');
			nw += add;
		}
		if(midodd != -1)
		{
			string add(1, (char)midodd + 'a');
			nw += add;
		}
		for(int i = 25; i >= 0; i--)
		{
			
			string add(f[i] / 2, (char)i + 'a');
			nw += add;
		}
		cout << nw << endl;
	}
	return 0;
}
