//to demonstrate passing objects using call by value and call by reference
#include<iostream>
using namespace std;
  class distanc{
    int meter;
    int cmeter;
    public:
    void inputdata(){
        cout<<"enter the distance (in meter and centimeter):"<<endl;
        cin>>meter>>cmeter;

    }
    distanc calbyvalue(distanc Y){
        Y.meter = Y.meter+Y.cmeter/100;
        Y.cmeter = Y.cmeter%100;
        return(Y);

    }
    distanc calbyrefer(distanc &Y){
         Y.meter = Y.meter+Y.cmeter/100;
        Y.cmeter = Y.cmeter%100;

    }
    void display(){
        cout<<"Distance:"<<endl;
        cout<<meter<<" M        "<<cmeter<<" CM        "<<endl;

    }

  } ;
int main(){
    distanc x,y,z;
    cout<<"input data for an object X"<<endl;
    x.inputdata();
    cout<<"input data for an object Y"<<endl;
    y.inputdata();
    cout<<"original values of an objects X"<<endl;
    x.display();
    cout<<"after call by value and return an object:"<<endl;
    z = x.calbyvalue(x);
    z.display();
    cout<<"the values for object X"<<endl;
    x.display();
    cout<<"original values of an objects Y"<<endl;
    y.display();

    x.calbyrefer(y);
    cout<<"after call by reference the values are:"<<endl;
    y.display();
    cout<<"the values for object y"<<endl;
    y.display();
    





    return 0;
}