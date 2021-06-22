/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include "bits/stdc++.h"
using namespace std;

int main() 
{
   int t, n;
   cin >> t;
   while(t--) 
   {
      cin >> n;
      vector <int> v(n);
      for(int i = 0; i < n; i++) 
	    {
         cin >> v[i];
      }
      int ans = v[0] + v[1];
      for(int i = 1; i + 1 < n; i++) 
	    {
         ans = min(ans, v[i] + v[i + 1]);
      }
      cout << ans << endl;
   }
   return 0;
}
