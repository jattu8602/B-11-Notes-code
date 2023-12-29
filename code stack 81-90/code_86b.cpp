#include<iostream>
using namespace std;
class shape{
    public:
    void area(int);
    void area(int,int);
    void area( float, float);
    
};
void shape ::void area(int r){
    float a = 3.141*r*r;
    cout<<"area of circle :"<<a<<endl;
    return 0;
}
void shape ::void area(int l, int b){
    int a1 = l*b;
    cout<<"area of rectangle is :"<<a1;
return 0;
}
void shape ::void area(float h, float f){
    float a2 = 0.5*l*b;
    cout<<"area of triangle is :"<<a2;
return 0;
}

int main(){
    shape s;
    s.area(4);
    s.area(4,5);
    s.area(4.5,6.7);
   return 0;
}    