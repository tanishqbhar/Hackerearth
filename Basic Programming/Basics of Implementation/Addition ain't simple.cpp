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
	while(n--)
	{
		string str, str2, str3;
		cin >> str;
		for(int i = str.size() - 1; i >= 0; i--)
			str2.push_back(str[i]);
		for(int i = 0; i < str.size(); i++)
		{
			if(str[i] + str2[i] - 96 >= 97 && str[i] + str2[i] - 96 <= 122)
				str3.push_back(str[i] + str2[i] - 96);
			else if(str[i] + str2[i] - 96 > 122)
				str3.push_back(str[i] + str2[i] - 122);
		}
		cout << str3 << endl;
	}
	return 0;
}
