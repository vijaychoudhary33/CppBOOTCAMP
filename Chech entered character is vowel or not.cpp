//------------------------------- 12.A PROGEAM TO ACCEEPT A CHARACTER AND CHECK IT WHETER IT IS VOWEL OR NOT-----------------------------
#include<iostream>

using namespace std;
int main()
{
	char v;
	cout<<"ENTER YOU CHARACTER:";
	cin>>v;
	v=='a'||v=='e'||v=='i'||v=='o'||v=='u'||v=='A'||v=='E'||v=='I'||v=='O'||v=='U'?cout<<"entered character is vowel":cout<<"entered character is not vowel";
	return 0;
}
