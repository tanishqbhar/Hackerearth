/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int t, n, i, j, k, arr[100000];
    cin >> t;                                    
    while(t--)
    {
        int count = 0;
        cin >> n;
        for(i = 0; i < n; i++)
			cin >> arr[i];
        for(j = 0; j < n; j++)
        {
            for(k = j + 1; k < n; k++)
            {
		        if((arr[j] + arr[k]) % 2 == 0 && arr[j] != arr[k])
		 			count++; 
           	}
        }
        cout << count << endl;
    }
    return 0;
}
