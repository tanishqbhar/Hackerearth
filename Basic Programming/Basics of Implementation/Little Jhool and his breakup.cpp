/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	string str = "love", s;
	cin >> s;
	int count = 0, k = 0;
	for(int i = 0; i < 4; i++)
	{
		for(int j = k; j < s.size(); j++)
		{
			if(str[i] == s[j])
			{
				count++;
				k = j + 1;
				break;
			}
		}
	}
	if(count == 4)
		cout << "I love you, too!" << endl;
	else
		cout << "Let us breakup!" << endl;
}
