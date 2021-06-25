/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<iostream>
using namespace std;

int main()
{
	int n, k, x, cnt, st, i;
	cin >> n >> k >> x;
	int arr[n + 1];
	for(i = 1; i < n; i++)
	{
		arr[i] = i + 1;
	}
	arr[n] = 1;
	st = x;
	i = arr[x];
	while(st != i)
	{
		for(;i != st && cnt != st % k;)
		{
			arr[st] = arr[i];
			i = arr[st];
			cnt++;
		}
		st = arr[st];
		i = arr[st];
		cnt = 0;
	}
	cout << st;
}
