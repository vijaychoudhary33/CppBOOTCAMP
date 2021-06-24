#include<iostream>
using namespace std;
int pow(int base , int power){
	if(power !=0){
		return (base*pow(base,power-1));
	}
	else{
		return 1;
	}
	    
}
int main(){
	int base , power;
	cout<<"enter the base number :";
	cin>>base;
	cout<<"enter the power number :";
	cin>>power;
	cout<<pow(base,power);
	return 0;
}
	
