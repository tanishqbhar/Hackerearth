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
    int t;
    cin >> t;
    while(t--)
    {
        long long s, x, n;
        cin >> s >> x >> n;
        long long a[n];
        int m = -1, j;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            if(a[i] > m)
            {
              m = a[i];
              j = i + 1;
            }
        }
        int y = count(a, a + n, m);
        if(y > 1)
            cout << "Many Roads" << endl;
        else
            cout << j << endl;
    }
}
