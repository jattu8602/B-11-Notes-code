//to overload binary > operator for the objects using friend function
#include<iostream>
using namespace std;
   

class MyClass {
private:
  int value;
public:
  MyClass(int value) : value(value) {}

  // Overload the > operator using a friend function
  friend bool operator>(const MyClass& lhs, const MyClass& rhs) {
    return lhs.value > rhs.value;
  }
};

int main() {
  MyClass obj1(10);
  MyClass obj2(20);

  // Use the overloaded > operator
  if (obj1 > obj2) {
    std::cout << "obj1 is greater than obj2" << std::endl;
  } else {
    std::cout << "obj1 is not greater than obj2" << std::endl;
  }

  return 0;
}