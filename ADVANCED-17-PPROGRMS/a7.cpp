//to demonstrate the use of constructor and destructor
#include<iostream>
using namespace std;
  class distanc{
    int meter;
    int centme;
    public:
    distanc()//default costructor
    {

    }
    distanc(int met, int cen){
        //constructor with two parameters
        cout<<"object is initialized and assigned the values "<<endl;
        meter = met;
        centme = cen;


    }
    ~distanc(){
        //destructor
        cout<<"destructor is invoked "<<endl;
        getchar();
    }
    distanc(int m){
        //parameterized constructor with one parameter
        cout<<"One data member is initialized and input is required for other "<<endl;
        meter = m;
        cout<<"Enter the distance in centimeter : ";
        cin>>centme;


    }
    void display(){
        cout<<"\nThe distance is : ";
        cout<<meter<<" , "<<centme;

    }

  } ;
int main(){
    int dm,dcm;
    distanc X = distanc(3,8);//explicit call
    X.display();
    cout<<"\nEneter distance in meter and centimeter "<<endl;
    cin>>dm>>dcm;
    distanc Y(dm,dcm);
    //implicit call for parameterised (two) constructor
    Y.display();
    distanc Z(6);
    //Implicit call for parameterised (one) constructor
    Z.display();
    getchar();


    return 0;
}