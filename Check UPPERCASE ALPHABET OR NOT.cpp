//------------------------------- 10.A PROGEAM TO ACCEEPT A CHARACTER AND CHECK IT WHETER IT IS UPPERCASE ALPHABET OR NOT-----------------------------
#include<iostream>

using namespace std;
int main()
{
	char ch;
	cout<<"ENTER YOU CHARACTER:";
	cin>>ch;
	ch>=65 && ch<=90?cout<<"your entered charater in uppercase":cout<<"your character is not in upper case";
	return 0;
}
