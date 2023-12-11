//function with no return type and with parameter
#include<iostream>
using namespace std;
void multi(int,int);


int main(){
    int a,b;
    cout<<"enter two number:"<<endl;
    cin>>a>>b;
    multi(a,b);
    return 0;
}
void multi(int x,int y){int c;

    
    c=x*y;
    cout<<"multiplication is:"<<c;


}