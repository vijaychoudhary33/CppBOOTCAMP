#include<iostream>
using namespace std;
int main()
{
	int i,n,flag=0;
	cout<<"Enter the number :";
	cin>>n;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		cout<<n<<" is not a prime number ";
	}
	else
	{
		cout<<n<<" is prime number ";
	}
	return 0;
}
