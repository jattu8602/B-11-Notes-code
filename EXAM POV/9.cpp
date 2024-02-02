// 9. virtual function

/*
A virtual function (also known as virtual methods) is a member function that is declared within a base class and is re-defined (overridden) by a derived class. When you refer to a derived class object using a pointer or a reference to the base class, you can call a virtual function for that object and execute the derived class’s version of the method.

1.  Virtual functions ensure that the correct function is called for an object, regardless of the type of reference (or pointer) used for the function call.

2.  They are mainly used to achieve Runtime polymorphism.

3.  Functions are declared with a virtual keyword in a base class.

4.  The resolving of a function call is done at runtime.











Rules for Virtual Functions
The rules for the virtual functions in C++ are as follows:

1.  Virtual functions cannot be static.

2.  A virtual function can be a friend function of another class.

3.  Virtual functions should be accessed using a pointer or reference of base class type to achieve runtime polymorphism.

4.  The prototype of virtual functions should be the same in the base as well as the derived class.

5.  They are always defined in the base class and overridden in a derived class. It is not mandatory for the derived class to override (or re-define the virtual function), in that case, the base class version of the function is used.

6.  A class may have a virtual destructor but it cannot have a virtual constructor.










Compile time (early binding) VS runtime (late binding) behavior of Virtual Functions
Consider the following simple program showing the runtime behavior of virtual functions.
*/

// C++ program to illustrate
// concept of Virtual Functions

#include <iostream>
using namespace std;

class base {
public:
	virtual void print() { cout << "print base class\n"; }

	void show() { cout << "show base class\n"; }
};

class derived : public base {
public:
	void print() { cout << "print derived class\n"; }

	void show() { cout << "show derived class\n"; }
};

int main()
{
	base* bptr;
	derived d;
	bptr = &d;

	// Virtual function, binded at runtime
	bptr->print();

	// Non-virtual function, binded at compile time
	bptr->show();

	return 0;
}
