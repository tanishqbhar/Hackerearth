/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    long long n, k;
    cin >> n >> k;
	long long x[n], y[n], dis[n];
    for(int i = 0; i < n; i++) 
        cin >> x[i];
    for(int i = 0; i < n; i++) 
        cin >> y[i];
    for (int i = 0; i < n; i++) 
        dis[i] = x[i]*x[i] + y[i]*y[i];
    sort(dis, dis + n);
    cout << ceil(sqrt(dis[k - 1])) << endl;
    return 0;
}
