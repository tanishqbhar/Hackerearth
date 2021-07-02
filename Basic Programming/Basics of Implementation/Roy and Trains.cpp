/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    float t0, t1, t2, d, v1, v2;
    cin >> t;
    while(t--)
    {
        cin >> t0 >> t1 >> t2 >> v1 >> v2 >> d;
        int ans1 = 1e9, ans2 = 1e9;
        if(t0 <= t1)                                 // first train equation
            ans1 = (int) (t1 + ceil(d * 60 / v1));         
        if(t0 <= t2)                                 // second train equation
            ans2 = (int) (t2 + ceil(d * 60 / v2));         
        if(min(ans1 , ans2) == 1e9)                  // check if he will arrive after the departure of the 2 trains
            cout << "-1" << endl;      
        else                                         // choose the minimum answer
            cout << min(ans1, ans2) << endl; 
    }
    return 0;
}
