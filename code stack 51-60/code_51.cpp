//function with return type and with no parameter
#include<iostream>
using namespace std;
int multi();


int main(){int m;
    m = multi();
    cout<<"multiplication is:"<<m;
    return 0;
}
int multi(){
    int a,b,c;
    cout<<"enter two number:"<<endl;
    cin>>a>>b;
    c=a*b;
    return c;
    

}