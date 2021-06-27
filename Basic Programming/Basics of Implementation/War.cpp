/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
    	int n;
    	cin >> n;
    	int arr1[n], arr2[n];
    	for(int i = 0; i < n; i++)
    		cin >> arr1[i];
    	for(int i = 0; i < n; i++)
    		cin >> arr2[i];
    	int x = *max_element(arr1 , arr1+n);
    	int y = *max_element(arr2 , arr2+n);
    	if(x > y)
    		cout << "Bob" << endl;
    	else if(x < y)
    		cout << "Alice" << endl;
    	else 
    		cout << "Tie" << endl;
	}
 	return 0;
}
