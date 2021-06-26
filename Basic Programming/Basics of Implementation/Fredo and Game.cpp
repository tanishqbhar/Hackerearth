/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t, x, n, i, y, flag;
    cin >> t;
    while(t--)
    {
        flag = -1;
        cin >> y >> n;
        vector<int>a;
        for(i = 0; i < n; i++)
        {
            cin >> x;
            a.push_back(x);
        }
        for(i = 0; i < n; i++)
        {
            if(a[i] == 0)
                y--;
            else
                y += 2;
            if(y <= 0 && i != (n - 1))
            {
                flag = i;
                break;
            }
        }
        if(flag == -1)
            cout << "Yes " << y << endl;
        else
            cout << "No " << flag + 1 << endl;
    }
}
