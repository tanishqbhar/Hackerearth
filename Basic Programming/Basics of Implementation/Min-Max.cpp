  
/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    int c = 0;
    for(int i = 0; i < n - 1; i++)
    {
        if(a[i + 1] - a[i] != 1 && a[i + 1] - a[i] != 0)
        {
            c++;
            break;
        }
    }
    if(c == 0)
        cout << "YES";
    if(c == 1)
        cout << "NO";
return 0;	
}
