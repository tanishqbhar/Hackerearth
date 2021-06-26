/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	int n;
    string s;
    cin >> s >> n;
	for (char& c: s)
    {
		if (!n) 
            break;
		if (c != '9') 
            c='9', n--;
	}
	cout << s << endl;
}
