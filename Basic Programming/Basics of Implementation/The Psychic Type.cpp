/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n, i, s, e, flag = 0, x;
    cin >> n;
    int a[n];
    for(i = 0; i < n; i++)
        cin >> a[i];
    cin >> s >> e;
    x = s;
    for(i = 0; i < n; i++)
    {
        x = a[x - 1];
        if(e == x || s == e)
        {
            flag = 1;
            break;
        }
    }
    if(flag == 0)
        cout << "No";
    else
        cout << "Yes";
}
