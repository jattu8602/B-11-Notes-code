/*
wap to illustrate varius arithmetic functions using functions like add(),
sub(),multi(),div()etc;
*/
#include<iostream>
using namespace std;
int multi(int,int);
int sum(int,int);
int sub(int,int);
int divi(int ,int);


int main(){
    int a,b;
    cout<<"enter two number:"<<endl;
    cin>>a>>b;
    cout<<"addition is:"<<sum(a,b)<<endl;
    cout<<"subtraction is :"<<sub(a,b)<<endl;
    cout<<"multiplication is:"<<multi(a,b)<<endl;
    cout<<"division is :"<<divi(a,b);
    
    return 0;
}
int multi(int x,int y){int c;
c = x*y;
return c;
}
int sum(int x,int y){int c;
c = x+y;
return c;
}
int sub(int x,int y){int c;
c = x-y;
return c;
}
int divi(int x,int y){int c;
c = x/y;
return c;
}