//to calculate the sum of two diatances and display the result using friend function
#include<iostream>
using namespace std;
   class distanc{
    int meter;
    int cmeter;
    friend distanc sum(distanc, distanc);
    public:
    void inputdata(){
        cout<<"enter the distance (in meter and centimeter):"<<endl;
        cin>>meter>>cmeter;


    }
    friend void disfriend(distanc A){
        cout<<"distance:"<<endl;
        cout<<A.meter<<" M      "<<A.cmeter<<" CM      "<<endl;

    }
    void display(){
        cout<<"distance:"<<endl;
        cout<<meter<<" M      "<<cmeter<<" CM         "<<endl;
        
    }
   };
int main(){
    
    return 0;
}