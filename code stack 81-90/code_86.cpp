 /*i.> function overloading
     function overloading is a early binding method which has various functions 
     with same name by varying functions which can be differenciased by seperate
     parameters pass to the function arguments.





     whenever a program contains more than one function with same name different types of 
     parameters called function overloading.

    
    
     */

#include<iostream>
using namespace std;
class addition{
    private:
     int g;
     int f;

     public:
void add(){
    cout<<"enter two numbers :"<<endl;
   cin>>g;
   cin>>f;
   cout<<"sum without parameter is :"<<g+f<<endl;
    

}
void add(int a,int b){
    int x = a;
    int y = b;
    cout<<"addition with parameter is:"<<x+y<<endl;

}
};

int main(){
    addition a1;
    a1.add();
    a1.add(7,8);
    
    return 0;
}










// #include<iostream>
// using namespace std;
// class shape{
//     public:
//     void area(int);
//     void area(int,int);
//     void area( float, float);
    
// };
// void shape ::void area(int r){
//     float a = 3.141*r*r;
//     cout<<"area of circle :"<<a<<endl;
//     return 0;
// }
// void shape ::void area(int l, int b){
//     int a1 = l*b;
//     cout<<"area of rectangle is :"<<a1;
// return 0;
// }
// void shape ::void area(float h, float f){
//     float a2 = 0.5*l*b;
//     cout<<"area of triangle is :"<<a2;
// return 0;
// }

// int main(){
//     shape s;
//     s.area(4);
//     s.area(4,5);
//     s.area(4.5,6.7);
//    return 0;
// }    