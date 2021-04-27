//-------------------------------------A PROGRAM TO PRINT FIBONACCI SERIES UPTO N NUMBER OF TERMS  BY METHOD .1---------------------------
#include<iostream>
using namespace std;
int main()
{
	int f=0,s=1,next=0,n;
	cout<<"enter the number terms :";
	cin>>n;
	cout<<f<<"\n"<<s<<"\n";
	for(int i=2;i<n;i++)
	{
		next=f+s;
		cout<<next<<"\n";
		f=s;
		s=next;
		
	}
	return 0;
	
}
