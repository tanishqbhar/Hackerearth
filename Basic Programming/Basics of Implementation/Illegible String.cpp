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
    int n, v = 0, w = 0, mini = 0, maxi = 0;
    string s;
	cin >> n >> s;
    for(int i = 0; i < n; i++)
    { 
      	if(s[i] == 'w')
      		w++;
      	else if(s[i] == 'v')
      		v++;
      	else
      	{
          	maxi++;
          	mini++;
           	int tot = 2 * w + v;
          	maxi += tot;
          	mini += (tot / 2) + (tot % 2);
          	v = 0;
          	w = 0;
      	}
    }
    int tot = 2 * w + v;
    maxi += tot;
    mini += (tot / 2) + (tot % 2);
   	cout << mini << " " << maxi << endl;
}
