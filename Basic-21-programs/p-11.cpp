//to swap two values using different parameters passing methods
#include<iostream>
using namespace std;
#include<math.h>
   
int main(){
    int a,b;
    cout<<"enter the value of a and b"<<endl;
    cin>>a>>b;
    void swap(int,int);
    void swap1(int &,int &);
    void swap2(int *,int *);
    cout<<"******          Origianl Values are         **********"<<endl;
    cout<<"                a="<<a<<"     b="<<b<<endl;
    cout<<"******      Function is called by Value       ******"<<endl;
    swap(a,b);//call by value
    cout<<"           a=:"<<a<<"         b=:"<<b<<endl;
    cout<<"           after call by value a and b remains unchanged"<<endl;
    swap1(a,b);//call by reference
    cout<<"           a=:"<<a<<"         b=:"<<b<<endl;
    cout<<"           after call by reference a and b changed"<<endl;
    swap2(&a,&b);//call by pointer
    cout<<"           a=:"<<a<<"         b=:"<<b<<endl;
    cout<<"           after call by pointer original a and b changed"<<endl;

    


    return 0;
}
void swap(int a,int b){
    a = a+b;
    b= a-b;
    a = a-b;

}
void swap1(int &x,int &y){
    x = x+y;
    y = x-y;
    x = x-y;

}
void swap2(int *a,int *b){
    *a = *a+*b;
    *b = *a-*b;
    *a = *a-*b;
}