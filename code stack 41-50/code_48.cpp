// built in function and its example
/*


*collection of program statements to solve specific tasks;
*a large program is divided into small sets of instructions known as functions as
functions ,such functions can be called multiple times which supports reusability; 

*there are two types of functions
built in and 
user defined 
*/
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double number, squareRoot;
    
    number = 25.0;

    // sqrt() is a library function to calculate the square root
    squareRoot = sqrt(number);

    cout << "Square root of " << number << " = " << squareRoot;

    return 0;
}