#include<iostream>
using namespace std;
int main()
{
   int n,a[n],ser=0,i;
    cout<<"enter the how many elements in  :";
   cin>>n;
   cout<<"ENTER THE WHICH YOU ARE SEARCH :";
   cin>>ser;
   for(  i=0;i<n;i++)
   {
   	cout<<"enter the "<< i <<"element";
   	cin>>a[i];
   }
   for( int i=0;i<n;i++)
   {
   	 cout<<a[i]<<"\n";
   }
   for( int i=0;i<n;i++)
   {
   	 if(a[i]==ser)
   	 {
   	 	cout<<ser<<"yours search is present  number at "<<i+1<<"\n";
   	 	break;
   	 }
   	
   }
   for( int i=0;i<n;i++)
   {
   	 cout<<a[i]<<"\n";
   }
   if(i==n)
   {
   	cout<<ser<<"is not present in the array";
   }
   
   return 0;


   	
}
