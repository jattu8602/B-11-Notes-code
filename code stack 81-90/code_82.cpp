/*
                 #FRIEND FUNCTION FOR TWO CLASSES                        
*/
#include<iostream>
using namespace std;
class rectb;
class rectl{
    public:
    int l;
    rectl(){
        cout<<"enter length"<<endl;
        cin>>l;
    }
    friend int area(rectl,rectb);
};

class rectb{
    public:
    int b;
    rectb()
    {cout<<"enter breadth:"<<endl;
    cin>>b;}
    friend int area(rectl,rectb);
}; 
int area(rectl r1, rectb r2){
    int a1;
    a1 = r1.l*r2.b;
    cout<<"area of rectangle:"<<a1<<endl;
    return 0;
}

int main (){
    rectl l1;
    rectb b1;
    area(l1,b1);
    
return                                       0;
}