/*
               

*/
#include<iostream>
#include<math.h>
#include<stdlib.h>
#define new-cal 1
#define old_cal 0
//stand_calc class to define standard calculator functions
using namespace std;
   class stand_calc{
    /*
    Prototyping of standard calculator functions. These functions are static, therefore calling of these functions is possible with the name of the class.There is no need to create an object of the class.

    */
   public:
   static double addition(double,double);
   static double subtraction(double,double);
   static double multiplication(double,double);
   static double division(double,double *);
   static double modulus(double *,double *);

   };
   //scien_calc class to define scientific calculator functions
   class scien_calc{
        static double square(double);
        static double cube(double);
        static double power(double,double);
        static double sq_root(double);
        static long int fact(double);;
        static double sin_func(double);
        static double cos_func(double);
        static double tan_func(double);

   };
   //addition function will add two numbers
   double stand_calc :: addition(double a,double b)
   {
    return(a+b);

   }
   //subtract function will subtract  the second number form the first number
   double stand_calc :: subtraction(double a,double b)
   {
    return(a-b);

   }
   //multiplication functon will multiply two numbers
   double stand_calc :: multiplication(double a,double b)
   {
    return(a*b);

   }
   //division function will divide the first number by the second number. This function accepts two arguments .One is copy of a variable and another is pointer type because if accepting divisor is zero ,then this function will show a message to enter the divisor again . Using pointer means that the entered value of the divisor for this function should be updated at the main function also.
   double stand_calc :: division(double a,double *b){
    while (*b == 0){
        cout<<"\nCannot divide by zero"<<endl;
        cout<<"Enter second number again : ";
        cin>>*b;

    }
    return (a/(*b));
   }
   //Modulus function will divide the first number by the second number and return the remainder part of the division . Similar to division function, it will not accept zero in the divisor . Modulus cannot be performed on a double number, so we need to convert it into an integer.
   double stand_calc :: modulus(double *a,double *b){
    while (*b = 0){
        cout<<"\n Cannot divide by zero "<<endl;
        cout<<"Enter second number again : ";
        cin>>*b;

    }
    //Conveerting double into an integer
    int x  = (int )*a;
    int y = (int )*b;
    if (*a-x>0||*b-y>0)
    cout<<"\nConverting decimal number into an integer to perform modulus:";
    *a =  x;
    *b = y;
    return(x%y);
    
    
   }
   //Declaration of scien_calc class functions starts form here.
   //Square function of scien_calc class to return accepting number to the power 2 
   double scien_calc :: square(double x){
    return (pow(x,2));
   }
   //cube function of scien_calc class to return accepting number to the power 3
   double scien_calc :: cube(double x){
    return(pow(x,3));
   }
   //
int main(){
    
    return 0;
}