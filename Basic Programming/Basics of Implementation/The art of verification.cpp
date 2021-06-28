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
	string s;
	cin >> s;
	int index = s.size();
	for(int i = 0;i < s.size(); i++)
	{
		if(s[i] == '?')
		{
			index = i;
		}
		else if(s[i] == '=' && !(s[i + 1] >= '0' && s[i + 1] <= '9'))
			cout << ": ";
		else if(s[i] == '&' && !(s[i + 1] >= '0' && s[i + 1] <= '9' || s[i +1 ] == 'l'))
			cout << endl;
		else if(index < i)
			cout << s[i];
	}
	return 0;
}
