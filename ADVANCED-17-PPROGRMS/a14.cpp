//to overload binary * operator using friend function
#include<iostream>
using namespace std;
   class distanc{
    private:
    friend distanc operator + (distanc X, distanc Y);
    int meter ;
    int centimeter;
    public:
    void inputdata(){
        cout<<"enter distance in meter:"<<endl;
        cin>>meter;
        cout<<"enter distance in centimeter:"<<endl;
        cin>>centimeter;
    }
    void display(){
        cout<<meter<<"M      "<<centimeter<<"CM      "<<endl;
    }
   };
   distanc operator +(distanc X,distanc Y){
    distanc Z;
    Z.meter = X.meter+Y.meter+(X.meter+Y.meter)/12;
    Z.centimeter = (X.centimeter+Y.centimeter)%12;
    return Z;

   }
int main(){
    class distanc A,B,C;
    cout<<"enter first distance:"<<endl;
    A.inputdata();
    cout<<"the first distance is:"<<endl;
    A.display();
    cout<<"enter second distance:"<<endl;
    B.inputdata();
    cout<<"the second distance is:"<<endl;
    B.display();
    cout<<"enter third distance:"<<endl;
    C.inputdata();
    cout<<"the third distance is:"<<endl;
    C.display();


    return 0;
}