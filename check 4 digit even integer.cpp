// ------------------------ 3.A PROGRAM TO ACCEPT A INTEGER AND CHECK WHETER  IT IS A 4 DIGIT EVEN INTEGER---------------
#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"ENTER A NUMBER:";
	cin>>a;
	
	
	 ( a>=1000 && a<9999)?(a%2==0?cout<<" your ENTERED NUMBER IS EVEN INTEGER":cout<<" YOUR NUMBER IS  NOT EVEN"):cout<<"YOUR NUMBER IS NOT 4 DIGIT";
	return 0;
}
