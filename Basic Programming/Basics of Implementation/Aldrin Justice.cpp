/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int T;
	cin >> T;
	while(T--)
	{
		int bt1, bt2, mt1, mt2;
		cin >> bt1 >> bt2 >> mt1 >> mt2;
		int lef = min(max(bt1, bt2), max(mt1, mt2));
		int righ = max(min(bt1, bt2), min(mt1, mt2));
		if (lef > righ)
			cout << "Nothing" << endl;
		else
		{
			if (lef == righ)
				cout << "Point" << endl;
			else
				cout << "Line" << endl;
		}
	}
	return 0;
}
