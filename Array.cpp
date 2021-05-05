#include <iostream>
using namespace std;
int main()
{
	int n,arr[n],i,search=0;
	cout<<"enter the no. of elements:";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"enter the element :";
		cin>>arr[i];
	}
	cout<<"enter the element you want to search";
	cin>>search;
	for(i=0;i<n;i++)
	{
		if(arr[i]==search)
		{
			cout<<search<<"is found at location "<<i;
			break;
		}
	}
	if(i==n)
	{
		cout<<"element is not found in array";
	}
	return 0;
}

