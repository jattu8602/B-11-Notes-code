//wap to calculate the root of an quadratic equation ax^2+bx+c
#include<iostream>
#include<math.h>
using namespace std;

int main(){
    float a,b,c,x,y,z,x1,x2;

    cout<<"give me values of a,b,c respectiveley from the equation ax^2+bx+c"<<endl;
    cout<<"enter value of a"<<endl;
    cin>>a;
    cout<<"enter value of b"<<endl;
    cin>>b;
    cout<<"enter value of c"<<endl;
    cin>>c;
    y=((b*b)-(4*a*c));
    z=sqrt(y);
    if(z>=0){
        if(z>0){
        x1=(-b+z)/2*a;
        cout<<"root with +ve sign is:"<<x1<<endl;
        x2=(-b-z)/2*a;
        cout<<"root with -ve sign is:"<<x2<<endl;}
        else{
            x=((-b)/(2*a));
            cout<<"here single root exists which is:"<<x<<endl;

        }

        
    }
    else{
        cout<<"sorry! roots of this equation is imaginary -_-"<<endl;
    }


    

    return 0;
}