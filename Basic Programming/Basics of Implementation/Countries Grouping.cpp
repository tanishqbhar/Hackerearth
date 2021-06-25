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
        int a[n], i, j, k = 0, flag = 0;
        for(i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for(i = 0 ; i < n;)
        {
            int l = a[i];
            k++;
            for(j = i; j < i + l; j++)
            {
                if(a[i] == a[j])
                {
                    flag = 0;
                }
                else
                {
                    flag = 1;
                    break;
                }
            }
            if(flag == 1)
            {
                break;
            }
            i = j;
        }
        if(flag != 1)
            cout << k << endl;
        else
            cout << "Invalid Data" << endl;
    }
    return 0;
}
