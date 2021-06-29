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
    cin.tie(NULL); 
    int n;
    cin >> n;
    int maxb = INT_MIN, maxd = INT_MIN, a[n], b[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    for(int i = 0; i < n; i++)
        cin >> b[i];
    for(int i = 1; i < n; i++)
        maxd = max(maxd, abs(a[i] - a[i - 1]));
    for(int i = 1; i < n; i++)
        maxb = max(maxb, abs(b[i] - b[i - 1]));
    if(maxb > maxd)
        cout << "Brian" << endl << maxb;
    else if(maxb < maxd)
        cout << "Dom" << endl << maxd;
    else
        cout << "Tie" << maxd;
}
