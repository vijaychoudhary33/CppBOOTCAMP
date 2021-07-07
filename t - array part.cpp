#include<iostream>
using namespace std;
int main(){
	int n,a[n],l,r;
	cout<"enter the number of element";
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"enter the"<<i <<" element";
		cin>>a[i];
	}
	cout<<"enter the value of l";
	cin>>l;
	cout<<"enter the value of r";
	cin>>r;
	int sum=0;
	for(int i=l;l<=r;l++){
		sum=sum+a[i];
		
	}
	cout<<"sum is "<<sum;
	return 0;
}
