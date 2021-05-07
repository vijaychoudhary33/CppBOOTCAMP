#include<iostream>
using namespace std;
int main()
{
	int n,rev=0,tem=0;
	cout<<"enter the number ";
	cin>>n;
	tem=n;
	for(rev=0;n>0;n=n/10)
	{
		rev=rev*10;
		rev=rev+n%10;
	}
	if(tem==rev)
	{
		cout<<"number is palindrome :"<<rev<<"\n";
		
	}
	else
	{
		cout<<"number is  not palindrome :"<<rev<<"\n";
	}
		

	
	
}
