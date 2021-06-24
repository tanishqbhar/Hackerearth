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
		string a;
		cin >> a;
		int n = a.size(), cnt = 0, h[26] = {0};
		for(int i = 0; i < n; i++)
			h[a[i] - 'a']++;
		for(int i = 0; i < 26; i++)
			if(h[i] > 0)
				cnt++;
		(cnt % 2 == 0) ? cout << "Player2" << endl : cout << "Player1" << endl;
	}
    return 0;
}
