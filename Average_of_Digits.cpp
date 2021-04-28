//---------------------------------------12. average of digits------------------------------
#include<iostream>
using namespace std;
int main()
{
	int i,a,b,sum=0,av=0,count=0;
	cout<<"enter the number";
	cin>>a;
	for(sum=0;a>0;a=a/10)
	{
		b=a%10;
		sum +=b;
		count++;
	}
	av=sum/count;
	cout<<"the sum of digits are :"<<av;
	return 0;
	
}
