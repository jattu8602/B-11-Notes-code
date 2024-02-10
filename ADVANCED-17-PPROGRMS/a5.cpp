//To show how a class can be friend of another
#include<iostream>
using namespace std;
   class first{
    int meter;
    friend class second;
    public:
    void inputdata(){
        cout<<"Enter the distance(in meter only) : "<<endl;
        cout<<"In meter : ";
        cin>>meter;
    }
    void display(){
        cout<<"\nDistance in meter : ";
        cout<<"meter";
    }
   };
   class second{
    int cmeter;
    public:
    void inputdata(){
        cout<<"Enter the distance (in centimeter only) : "<<endl;
        cout<<"In centimeter : ";
        cin>>cmeter;
    }
    void display(first A){
        cout<<"\nDistance in meter = "<<A.meter;
        cout<<"\nDistance in centimeter = "<<cmeter;
    }
    void sum(first A){
        float dmeter = A.meter + cmeter/100;
        float dcmeter = cmeter%100;
        cout<<"\n The distance in meter and centimeter is : ";
        cout<<"\nMeter = "<<dmeter;
        cout<<"\nCentimeter = "<<dcmeter;
    }
   };
int main(){
    first X;
    second Y;
    cout<<"\nInput data for an object X "<<endl;
    X.inputdata();//Public member function called
    cout<<"\nInput data for an object Y "<<endl;
    Y.inputdata();

    cout<<"\nOriginal value of Object X ";
    X.display();
    cout<<"\nValues of objects Y : ";
    Y.display(X);
    cout<<"\nThe total distance : ";
    Y.sum(X);
    getchar();

    return 0;
}