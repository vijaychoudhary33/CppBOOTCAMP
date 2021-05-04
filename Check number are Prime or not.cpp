#include<iostream>
using namespace std;
int main()
{
	int i,n,fl=0;
	cout<<"Enter the number :";
	cin>>n;
	for(i=2;i<n;i++)
	{
		if(n%i==0){
		      fl=1;
		      break;
	    }
	}
	if(fl==1)
	{
		cout<<n<<" is not a prime number";
		
	}
	else
	{
		cout<<n<<" is a prime number .";
	}
	return 0;
}
