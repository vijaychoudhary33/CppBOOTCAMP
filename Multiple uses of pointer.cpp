#include<iostream>
using namespace std;
int fun(int x,int *ay,int **az)
{
	int y,z;
	**az+=1;
	z=**az;
	y=*ay;
	x+=z;
	return(x+y+z);
	
}
int main()
{
	int c,*b,**a;
	cout<<"enter the number :";
	cin>>c;
	b=&c,a=&b;
	cout<<fun(c,b,a);
	return 0;
}
