#include<iostream>
using namespace std;
int main()
{
	int i,n,rev=0,r;
	cout<<"enter the number ";
	cin>>n;
	for(i=n;i>0;i=i/10)
	{
		r=i%10;
		rev=rev*10+r;
	}
	cout<<rev;
	return 0;
	
}
