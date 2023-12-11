//function with return type and with parameter
#include<iostream>
using namespace std;
int multi(int,int);


int main(){
    int a,b;
    cout<<"enter two number:"<<endl;
    cin>>a>>b;
    multi(a,b);
    cout<<"multiplication is:"<<multi(a,b);
    return 0;
}
int multi(int x,int y){int c;
c = x*y;
return c;
    

}