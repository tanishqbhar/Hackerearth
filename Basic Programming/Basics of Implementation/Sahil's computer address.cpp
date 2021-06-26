/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;

int main()
{
    char str[64];
    cin >> str;
    char *pck;
    int num = 0, count = 0;
    pck = strtok(str, ".");
    while(pck != NULL)
    {
        num = atoi(pck);
        if(num >= 0 && num <= 255)
        {    
            count++;
        }
        pck = strtok(NULL, ".");
    }
    if(count == 4)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
