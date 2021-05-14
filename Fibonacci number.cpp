#include<iostream>
using namespace std;
int main()
{
	int f=0,s=1,next=0,n,i;
	cout<<"enter the no. of terms:";
	cin>>n;
	cout<<f<<"\n"<<s<<"\n";
	for(i=2;i<n;i++)
	{
		next=f+s;
		cout<<next<<"\n";
		f=s;
		s=next;
	}
	
	return 0;
}
