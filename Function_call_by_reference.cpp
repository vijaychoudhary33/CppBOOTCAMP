//-----------Function Call by Reference-Swapping numbers------------------------
#include<iostream>
using namespace std;
void swapping(int *a,int *b)
{
	int c;
	c=*a;
	*a=*b;
	*b=c;
}
int main(){
	int a,b;
	cout<<"enter the first number :";
	cin>>a;
	cout<<"enter the second number :";
	cin>>b;
	cout<<"Before swapping :"<<endl;
	cout<<"a value is "<<a<<endl;
	cout<<"b value is "<<b<<endl;
	cout<<"After swapping:"<<endl;
	swapping(&a,&b);
	cout<<"a value is "<<a<<endl;
	cout<<"b value is "<<b<<endl;
	return 0;
}
/*WHY Variables remains unchanged afterswapping by Call by Value method?
function call by value for a&b. so actually *a and *b gets swapped (not a,b).
As in call by value actual parameters aare just copied into the formal parameters.*/
