//-----------------------13.A PROGRAM TO CHECK ENTER YEAR IS IN LEAP YEAR OR NOT/----------------------------------------------
#include<iostream>
using namespace std;
int main()
{
	int year;
	cout<<"enter the year :";
	cin>>year;
	if(year%4==0)
	{
		if(year%100==0)
		{
			if(year%400==0)
			{
				cout<<"your enter year is leap year ."<<year;
			}
			else
			{
				cout<<"your enter year is not leap year ."<<year;
			}
		}
		else
		{
			cout<<"your enter year is leap year ."<<year;
		}
   }
   else 
   {
   	cout<<"your entered year is not leap year"<<year;
   }
   return 0;
}
