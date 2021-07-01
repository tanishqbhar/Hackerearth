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
	int i, t = 0;
	cin >> s;
	if(s.find("000000") == -1 && s.find("111111") == -1)
		t = 1;
	if(t == 0)
		cout << "Sorry, sorry!" << endl;
	else	
		cout << "Good luck!" << endl;
}
