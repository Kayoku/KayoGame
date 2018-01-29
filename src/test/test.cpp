#include <iostream>
#include <vector>
#include <memory>
#include <functional>

class B
{
 private:
  int a;

 public:
  B(int a):
   a(a)
   {}
};

class A
{
 private:
  std::vector<std::reference_wrapper<B>> bs;

 public:
  A()
   {}

  void add_b(B &b)
  {
   std::cout << "add: " << &b << std::endl;
   bs.push_back(b);
  }

  void display()
  {
   for (auto b : bs)
    std::cout << "add: " << &b << std::endl;
  }
};

int main()
{
 A a;
 B b1(2);
 B b2(3);

 a.add_b(b1);
 a.add_b(b2);
 a.display();
 std::cout << "add: " << &b1 << std::endl;
 std::cout << "add: " << &b2 << std::endl;
 return 0;
}
