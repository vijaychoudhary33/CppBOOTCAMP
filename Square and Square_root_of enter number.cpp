//------------------------------- 8.A PROGEAM TO ACCEEPT AN INTEGER AND PRINT THE SQUARE AND SQUARE ROOT OF THE NUMBER-----------------------------
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int a ,b;
	double sr;
	cout<<"enter the number you want square:";
	cin>>a;
	cout<<"enter the number you want square root:";
	cin>>b;
	//square of number
    sr=sqrt(b);
    cout<<"square of number:"<<pow(a,2)<<endl;
    //square root of number
    cout<<"square root of number is:"<<sr;
	return 0;
	
	
}

