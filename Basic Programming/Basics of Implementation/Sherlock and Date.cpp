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
		int day, year;
		string month;
		cin >> day >> month >> year;
		if(day == 1)
		{
			if(month == "January")
			{
				year--;
				cout << 31 << " " << "December" << " " << year << endl;
			}
			else if(month == "February")
				cout << 31 << " " << "January" << " " << year << endl;
			else if(month == "March")
			{
				if(year % 400 == 0 || (year % 4 == 0) && (year % 100 != 0))
					cout << 29 << " " << "February" << " " << year << endl;
				else
					cout << 28 << " " << "February" << " " << year << endl;
			}
			else if(month == "April")
				cout << 31 << " " << "March" << " " << year << endl;
			else if(month == "May")
				cout << 30 << " " << "April" << " " << year << endl;
			else if(month == "June")
				cout << 31 << " " << "May" << " " << year << endl;
			else if(month == "July")
				cout << 30 << " " << "June" << " " << year << endl;
			else if(month == "August")
				cout << 31 << " " << "July" << " " << year << endl;
			else if(month == "September")
				cout << 31 << " " << "August" << " " << year << endl;
			else if(month == "October")
				cout << 30 << " " << "September" << " " << year << endl;
			else if(month == "November")
				cout << 31 << " " << "October" << " " << year << endl;
			else if(month == "December")
				cout << 30 << " " << "November" << " " << year << endl;
		}
		else
		{
			day--;
			cout << day << " " << month << " " << year << endl;
		}
	}
}
