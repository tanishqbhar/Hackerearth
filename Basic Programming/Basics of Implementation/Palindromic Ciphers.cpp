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
		string s1, s2;
		cin >> s1;
		long long int count = 1;
		for(int i = 0; i < s1.length(); i++)
  			count *= (s1[i] - 96);
		s2 = s1;
		reverse(s2.begin(), s2.end());
		if(s1 == s2)
  			cout << "Palindrome" << endl;
		else
			cout << count << endl;
	}
  	return 0;
}
