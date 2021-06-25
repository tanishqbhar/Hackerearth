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
    int a[1000001] = {0}, i, j, k, c = 0;
    for(i = 1; i < 1000001; i++)
    {
        j = k = i;
        string s1 = "", s2 = "";
        while(j)
        {
            s1 += j % 10 + '0';
            j /= 10;
        }
        int flag1 = 0, flag2 =0;
        string s3 = s1;
        reverse(s1.begin(), s1.end());
        if(s3 == s1)
            flag1 = 1;
        if(flag1)
        {
            while(k)
            {
                s2 += k % 2 + '0';
                k /= 2;
            }
            string s4 = s2;
            reverse(s2.begin(), s2.end());
            if(s4 == s2)
                flag2 = 1;
        }
        if(flag1 && flag2)
            c++;
        a[i] = c;
    }
    int q;
    cin >> q;
    while(q--)
    {
        int n;
        cin >> n;
        cout << a[n] << endl;
    }
}
