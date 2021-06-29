/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int t;
	cin >> t;
	while(t--)
	{
		string s1, s2;
		cin.ignore();
		getline(cin, s1);
		getline(cin, s2);
		int a[26] = {0}, b[26] = {0};
		int l1 = s1.length(), l2 = s2.length(),i;
		for(i = 0; i < l1; i++)
		{
			if(s1[i] >= 'a' && s1[i] <= 'z')
				a[s1[i] - 'a']++;
		}
		for(i = 0; i < l2; i++)
		{
			if(s2[i] >= 'a' && s2[i] <= 'z')
				b[s2[i]-'a']++;
		}
		int flag1 = 0, flag2 = 0;
		for(i = 0; i < 26; i++)
		{
           	if(a[i] > b[i])
		   		flag1 = 1;
		   	if(a[i] < b[i])
		   		flag2 = 1;
		}
		if(flag1 == 1 && flag2 == 1)
			cout << "You draw some." << endl;
		if(flag1 == 1 && flag2 == 0)
			cout << "You win some." << endl;
		if(flag1 == 0 && flag2 == 1)
			cout << "You lose some." << endl;
	}
}
