//abstract class
#include<iostream>
using namespace std;
class A
{
  public:
  int a, b, c;
  virtual void test() = 0;
  A(int a, int b)
  {
    cout << "Hello I am the constructor" << "\n";
  }
};
class B : public A
{
  int y;
  public:
  B(int i, int j) : A(a, b)
{
    a = i;
    b = j;
    c = a + b;
}
  void test()
  {
   cout << "The sum is = " << c << "\n";
    }
};
int main()
{
  B obj(42,50);
  obj.test();
  return 0;
}

