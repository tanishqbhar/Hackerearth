/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, y, p, i, j;
    cin >> n >> x >> y >> p;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            int mx = abs(x - i), my = abs(y - j), power = p - max(mx, my);
            if(power < 0)
                cout << "0 ";
            else
                cout << power << " ";
        }
        cout << endl;
    }
}
