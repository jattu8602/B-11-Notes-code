//to demonstrate function overloading with different types of arguments
#include<iostream>
using namespace std;
   class sample{
    private:

    int n1,n2;
    char n3,n4;
    float n5,n6;
    private:
    void displaydata(int a,int b){
        //function with two int parameters
        n1 = a;
        n2 = b;
        cout<<"first number = "<<n1<<endl;
        cout<<"second number = "<<n2<<endl;

    }
    void displaydata(char a,char b){
        //function with two int parameters
        n3 = a;
        n4 = b;
        cout<<"first number = "<<n3<<endl;
        cout<<"second number = "<<n4<<endl;

    }
    void displaydata(float a,float b){
        //function with two int parameters
        n5 = a;
        n6 = b;
        cout<<"first number = "<<n5<<endl;
        cout<<"second number = "<<n6<<endl;

    }




   };
int main(){
    int i1,i2;
    char c1,c2;
    float f1,f2;
    class sample X;
    cout<<"enter two integer numbers"<<endl;
    cin>>i1>>i2;
    cout<<endl;
    X.displaydata(i1,i2);
    //function with two int parameters is called
    cout<<"enter two characters"<<endl;
    cin>>c1,c2;
    cout<<endl;
    X.displaydata(c1,c2);
    //function with two char parameters is called
    cout<<"enter two floating point numbers"<<endl;
    cin>>f1>>f2;
    cout<<endl;
    X.displaydata(f1,f2);
    //function with two float parameters is called



    return 0;
}