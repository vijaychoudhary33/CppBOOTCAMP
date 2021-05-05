#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int i,n,flag=0;
	cout<<"enter the number ";
	cin>>n;
	for(i=2;i*i<=n;i++)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		cout<<n<<" in not a  prime number ";
		
	}
	else
	{
		cout<<n<<"is prime number";
	}
	return 0;
}
