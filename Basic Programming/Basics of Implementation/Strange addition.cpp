/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
 
int reverseNum(int n)
{
    int num = 0;
    while(n)
    {
        int rem = n % 10;
        num = num * 10 + rem;
        n /= 10;
    }
    return num;
}
 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a, b, ans;
        cin >> a >> b;
        a = reverseNum(a);
        b = reverseNum(b);
        ans = reverseNum(a+b);
        cout<<ans<<endl;
    }
}
