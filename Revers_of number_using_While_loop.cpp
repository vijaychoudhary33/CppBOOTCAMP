#include<iostream>
using namespace std;
int rev(int n)
{
	int rev_no=0;
	while(n>0)
	{
		rev_no=rev_no*10+n%10;
		n=n/10;
	}
	return rev_no;
}
int main()
{
	int number,reve=0;
	cout<<"enter the number :";
	cin>>number;
	reve=rev(number);
	cout<<"\nreverse of number is equal "<<reve;
	return 0;
}
