/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
//Method-1 Faster
#include <bits/stdc++.h>
using namespace std;
 
inline int solve(int n) 
{
	unordered_map<int,int> g; 
	for (int a, i = 0; i < n; ++i)
		cin >> a, g[a] = 1;
	return g.size()&1; 
}
 
int main() 
{
	int t;
	ios_base::sync_with_stdio(0), cin.tie(0), cin >> t;
	for (int n; t--; cout << char('Q'-solve(n)) << '\n')
		cin >> n; 
}
//Method-2 based on given conditions
#include<bits/stdc++.h>
using namespace std;
 
char find_the_winner (vector<int> A) 
{
    set<int> numbers;
    for(int i : A)
        numbers.insert(i);
    if(numbers.size() % 2 == 0)
        return 'Q';
    else 
        return 'P';
}
 
int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for(int t_i=0; t_i<T; t_i++)
    {
        int n;
        cin >> n;
        vector<int> A(n);
        for(int i_A=0; i_A<n; i_A++)
        {
        	cin >> A[i_A];
        }
        char out_;
        out_ = find_the_winner(A);
        cout << out_;
        cout << "\n";
    }
}
