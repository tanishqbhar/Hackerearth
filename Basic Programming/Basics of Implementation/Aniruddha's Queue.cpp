/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
 
int scan()
{
    int n = 0, ch=getchar_unlocked();
    while(ch < 48)
        ch = getchar_unlocked();
    while(ch > 47)
    n = (n << 3) + (n << 1) + ch - '0', ch = getchar_unlocked();
    return n;
}
 
int main()
{
    long long t, n, i, j, f, m, x, mx;
    t = scan();
    while(t--)
    {
        n = scan();
        int a[n],b[n];
        mx = 0;
        for(i = 0; i < n; i++)
        {
            a[i] = scan();
            mx += a[i];
        }
        m = scan();
        m %= mx;
        if(m == 0)
            m = mx;
        f = -1;
        b[0] = a[0];
        if(b[0] >= m)
        {
            cout << "1" << endl;
            continue;
        }
        for(i = 1; i < n; i++)
        {
            b[i] = a[i] + b[i - 1];
            if(b[i] >= m)
            {
                f = 1;
                break;
            }
        }
        if(f == 1)
        {
            cout << i + 1 << endl;
            continue;
        }
    }
    return 0;
}
