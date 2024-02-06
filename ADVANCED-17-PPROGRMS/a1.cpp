//to read and the distance in meter and centimeter using class and object
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
    void display();
   }Y;//declearing Y as an object
   void distanc::display(){
    meter = meter+cmeter/100;
    cmeter = cmeter%100;
    cout<<"the distance entered is:"<<endl;
    cout<<meter<<"M"<<cmeter<<"CM"<<endl;

   }
   
int main(){
    distanc X;
    cout<<"object X"<<endl;
    X.inputdata();
    X.display();

    cout<<"object Y"<<endl;
    Y.inputdata();
    Y.display();


return 0;
}