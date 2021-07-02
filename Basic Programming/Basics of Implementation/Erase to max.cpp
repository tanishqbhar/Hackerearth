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
    cin.tie(NULL); cout.tie(NULL)
    int t, min, c, n, k;
    long int sum;
    cin >> t;
    while(t--)
    {          
        cin >> n;
        k = 1; 
        sum = 0;
        int a[1000001]={0};
        for(int i = 0; i < n; i++)
        { 
            cin>>c;
            a[c]++;
            sum+=c;
        }
        for(int i = 1000000; i >= 0; i--)
        {
            if(a[i]==0) 
                continue;
            if((min>a[i]*i)||k==1)
            {
                min = a[i] * i;
                k = 0;
            }
        }
        cout << sum - min << endl;  
    }
}
