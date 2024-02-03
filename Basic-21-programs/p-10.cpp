//to calculate the factorial of a given number using both ways of function calling
#include<iostream>
using namespace std;
   
int main(){
    int n;
    long f;
    cout<<"enter the number whose factorial is required"<<endl;
    cin>>n;
    void factorial(int);
    cout<<"******           The factorial is called in first way       ********"<<endl;
    factorial(n);
    long int factorial1(int);
    cout<<"********         The factorial is called in second way           *********"<<endl;
    f = factorial1(n);
    cout<<"                 The factorial of "<<n<<" ="<<f;


    return 0;
}
void factorial(int num1){
    long int fact = 1;
    for (int i = 1; i <=num1; i++)
    {
        fact = fact*i;

    }
    cout<<"                 the factorial of "<<num1<<" =  "<<fact<<endl;

}
long int factorial1(int num2){
    long int fact = 1;
    for (int i = 1; i <=num2; i++)
    {
        fact = fact *i;
    }
    return (fact);
}