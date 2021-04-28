#include<iostream>
using namespace std;
int main()
{
	int a,c;
	char b;
	cout<<"enter the thr first number :";
	cin>>a;
	cout<<"enter thr arithmictic sign :";
	cin>>b;
	cout<<"enter the second number :";
	cin>>c;
	switch(b){
	
	     case '+':
	     	cout<<"the sum of two number is :"<<a+c;
	     	break;
	     case '-':
		    cout<<"the substraction of two number is :"<<a-c;
	     	break;
	     case '*':
		    cout<<"the multiple of two number is :"<<a*c;
	     	break;
		 case '/':
		   cout<<"the divide of two number is :"<<a/c;
	     	break;
		 case '%':
		   cout<<"the mod of two number is :"<<a%c;
	     	break;
		 default:
		    cout<<"you enter invaild sign .";
     }
    return 0;
				 	 	 	
			 	
}
