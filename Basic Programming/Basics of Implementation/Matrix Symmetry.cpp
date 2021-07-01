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
        char mat[n][n],flag = 0, flag1 = 0;
        for(auto i = 0; i < n; i++)
		{
            for(auto j = 0; j < n; j++)
                cin >> mat[i][j];
        }
        for(auto i = 0; i < n; i++)
		{
            for(auto j = 0; j < n; j++)
			{
                if(mat[i][j] != mat[n - 1 - i][j])
                    flag=1;break;             
            }
        }
        for(auto i = 0; i < n; i++)
		{
            for(auto j = 0; j < n; j++)
			{
                if(mat[j][i] != mat[j][n - 1 - i])
				{
                    flag1 = 1;
					break;
                }
            }
        }
        if((flag == 1) && (flag1 == 1))
            cout << "NO" << endl;
        else if((flag == 0) && (flag1 == 0))
            cout << "BOTH" << endl;
        else if((flag == 0) && (flag1 == 1))
            cout << "HORIZONTAL" << endl;
        else   
            cout << "VERTICAL" << endl;    
    }
}   
