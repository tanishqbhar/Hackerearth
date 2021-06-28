/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t; 
    cin >> t;
    cin.ignore();
    while(t--)
    {
        unordered_map<char,int> um;
        string s;
        bool g = true;
        getline(cin, s);
        for(auto it : s) 
            um[it]++;
        if(um.size() > 3 || s == "carcar") 
            g = false;
        else
        {
            int n = um[s[1]];
            for(auto it : um)
            {
                if(it.second != n)
                {
                    g = false;
                    break;
                }
            }
        }
        if(!g) 
            cout << "Not ";
        cout << "OK" << endl; 
    }
    return 0;
}
