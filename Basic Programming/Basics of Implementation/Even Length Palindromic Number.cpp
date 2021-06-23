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
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        string n;
        cin >> n;
        int a[11] = {};
     	for(int i = 0; i < n.size(); i++)
        {
            a[n[i] - '0']++;  
        } 
        int max = 0;
        for(int i = 0; i < 11; i++)
        {
            if(a[max] < a[i])
                max = i;
        }
        cout << max << endl;
    }
    return 0;
}
