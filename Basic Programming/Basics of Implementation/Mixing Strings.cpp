/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
 
string mix(string a, string b)
{
    int i, j, flag;
    for(i = 0; i < a.length(); i++)
    {
        flag = 0;
        for(j = i; j < a.length(); j++)
            if((j - i) >= b.length() || b[j - i] != a[j])
			{
				flag = 1;
				break;
			}
        	if(flag == 0)
				break;
    }
    for(j = a.length() - i; j < b.length(); j++)
        a += b[j];
    return a;
}
 
int main()
{
    int n, ar[10] = {}, i, j, ans = 1000000, check = 0;
    string str[11], ret, temp;
    cin >> n;
    for(i = 0; i < n; i++)
    {
        cin >> str[i];
        check += str[i].size();
        ar[i] = i;
    }
    do
    {
        ret = str[ar[0]];
        for(i = 1; i < n; i++)
            ret = mix(ret, str[ar[i]]);
        if(ret.length() < ans)	
			ans = ret.length();
    }
	while(next_permutation(ar, ar + n));
    	cout << ans << endl;
    return 0;
}
