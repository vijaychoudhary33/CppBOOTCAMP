//name , age
#include<iostream>
using namespace std;
class person
{
	char name[30];
	int age;
	public:
		void get_data(void);
		void display(void);
};
void person::get_data(void)
{
	cout<<"enter name:";
	cin>>name;
	cout<<"enter age:";
	cin>>age;
}
void person::display(void)
{
	cout<<"\n name:"<<name;
	cout<<"\n age:"<<age;
}
int main()
{
	person p;
	p.get_data();
	p.display();
	return 0;
}
