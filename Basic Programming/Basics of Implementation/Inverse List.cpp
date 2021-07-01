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
        int n;
        cin >> n;
        vector<int>v(n);
        for(int i = 0; i < n; i++)
            cin >> v[i];
        int f = 1, a[n];
        for(int i = 0; i < n; i++)
            a[i] = v[v[i] - 1];
        for(int i = 0; i < n; i++)
        {
            if(a[i] != a[a[i] - 1])
            {
                f = 0;
                break;
            }
        }
        if(f == 1)
            cout << "inverse" << endl;
        else
            cout << "not inverse" << endl;
    }
}
