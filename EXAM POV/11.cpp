// 11. how function overloading is done with a simple program 

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






















