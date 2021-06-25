/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;

int prime(int sum)
{
    if(sum <= 1)
        return 0;
    else
    {
        for(int i = 2; i < sum / 2; i++)
        {
            if(sum % i == 0)
                return 0;
        }
    }
    return 1;
}

int main()
{
    int n, count = 0;
    cin >> n;
    int a[105][105] = {0};
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }    
    }
    int sum = 0;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            sum += a[i - 1][j] + a[i][j + 1] + a[i + 1][j] + a[i][j - 1];
            if(prime(sum) == 1)
                count++;
            sum = 0;          
        } 
    }  
    cout << count;
    return 0;
}
