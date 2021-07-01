/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int num;
    cin >> num;                 
    while(num--)
    {
        string s;
        cin >> s;
        map<char,int>map;   
        for(int i = 0; i < s.size(); i++)
            map[s[i]]++;
        if(map.size() == 26) 
			cout << "YES" << endl;
        else 
			cout << "NO" << endl;
    }
}
