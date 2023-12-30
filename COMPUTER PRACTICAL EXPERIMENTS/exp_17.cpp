/*
wap to implement function overloading to calculate area of rectangle, circle, square etc.
*/
#include<iostream>
using namespace std;
class shape{
    public:
    void area(int);
    void area(int,int);
    void area( double, double);
    
};
void shape :: area(int r){
    float a = 3.141*r*r;
    cout<<"area of circle :"<<a<<endl;

}
void shape :: area(int l, int b){
    int a1 = l*b;
    cout<<"area of rectangle is :"<<a1<<endl;
}
void shape :: area(double h, double f){
    double a2 = 0.5*h*f;
    cout<<"area of triangle is :"<<a2<<endl;
}

int main(){
    shape s;
    s.area(4);
    s.area(4,5);
    s.area(4.5,6.7);
   return 0;
}    