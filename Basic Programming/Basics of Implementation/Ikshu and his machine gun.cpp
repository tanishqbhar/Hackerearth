/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    int arr[n + 1], cnt = 0;
    for(int i = 0; i < n; i++)
    cin >> arr[i];
    sort(arr, arr + n);
    for(int i = 0; i < n; i++)
    {
        arr[i] -= cnt;
        cout << arr[i] << " ";
        cnt++;
    }    
}
