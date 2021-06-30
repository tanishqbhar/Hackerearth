/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h> 
using namespace std;
 
int main() 
{
	int arr[100000] = {0}, count = 0, sum = 0, num, x1 = 0, x = 0, y = 0;
	string s1;
	cin >> num;
	for(int j = 0; j < num; j++)
	{
       	cin >> s1;
	   	if(count = 0)
		{
	     	x1 = 1000 * s1[0] + 100 * s1[1] + 10 * s1[3] + s1[4];
		 	for(int i = 0; i < x1; i++)
		 		arr[i] = 0;
	   	}
	  	x = 1000 * s1[0] + 100 * s1[1] + 10 * s1[3] + s1[4];
	  	y = 1000 * s1[6] + 100 * s1[7] + 10 * s1[9] + s1[10];
	 	count++;
	 	for(int i=x;i<y;i++)
	 		arr[i]++;
	}
	for(int i = 0; i < y; i++)
	{
		if(arr[i] > 1)
		{
			cout << "Will need a moderator!";
			break;
		}
		sum++;
	}
	if(sum == y)
		cout << "Who needs a moderator?" ;
}
