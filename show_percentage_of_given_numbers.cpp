//---------------------------12. A PROGRAM CCCEPT MARKS OF 4 SUBJECT ENGLISH , HINDI,MATH,SCIENCE CALCULATE PERCENTAGE .--------------------------
#include<iostream>
using namespace std;
int main()
{
	float a,b,c,d,total=0,per=0;
	cout<<"ENTER THE YOUR NUMBER IN ENGLISH OUT OF 100 :";
	cin>>a;
	cout<<"ENTER THE YOUR NUMBER IN HINDI OUT OF 100 :";
	cin>>b;
	cout<<"ENTER THE YOUR NUMBER IN MATHEMATICS OUT OF 100 :";
	cin>>c;
	cout<<"ENTER THE YOUR NUMBER IN SCIENCE OUT OF 100 :";
	cin>>d;
	total=a+b+c+d;
	per=total/4;
	if(per>=60)
	{
		cout<<"YOU ARE FIRST DIVISION :"<<per;
	}
	if(per>=50&&per<60)
		{
		cout<<"YOU ARE SECOND DIVISION :"<<per;
	}
	if(per>=40&&per<50)
		{
		cout<<"YOU ARE THIRD DIVISION:"<<per;
	}
	if(per<40)
		{
		cout<<"YOU ARE RE-AAPEAR :"<<per;
	}
	return 0;
	
	
}
