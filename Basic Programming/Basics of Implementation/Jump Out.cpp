/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int N, A[100011];;
    cin >> N;
    for(int i = 1; i <= N; i++) 
        cin >> A[i];
    for(int i = 1; i <= N; i++) 
    {
        if(i + A[i] > N) 
        {
            cout << i;
            return 0;
        }
    }
}
