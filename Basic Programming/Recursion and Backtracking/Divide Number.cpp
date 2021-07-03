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
    	long long n; 
		  cin >> n;
    	if(n & 1 or n < 4) 
			  cout << "-1" << endl;
    	else if(!(n % 4)) 
			  cout << ((n >> 2) * (n >> 2) * (n >> 2) * (n >> 2)) << endl;
    	else if(!(n % 6)) 
			   cout << ((n / 6) * (n / 6) * (n / 3) * (n / 3)) << endl;
    	else if(!(n % 10)) 
			  cout << ((n / 10) * (n / 5) * (n / 5) * (n >> 1)) << endl;
    	else 
			  cout << "-1" << endl;
  	}
  	return 0;
}
