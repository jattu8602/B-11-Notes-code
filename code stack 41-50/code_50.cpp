//function with no return type and with no parameter
#include<iostream>
using namespace std;
void multi();


int main(){
    multi();
    return 0;
}
void multi(){
    int a,b,c;
    cout<<"enter two number:"<<endl;
    cin>>a>>b;
    c=a*b;
    cout<<"multiplication is:"<<c;

}