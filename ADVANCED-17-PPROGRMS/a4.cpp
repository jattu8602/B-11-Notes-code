//to calculate the sum of two distances and display the result using friend function
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
   distanc sum (distanc A,distanc B){
    //friend function is defined outside the class
    distanc C;
    C.meter = A.meter +B.meter +(A.cmeter+B.cmeter)/100;
    C.cmeter = (A.cmeter + B.cmeter)%100;
    return (C);


   }

int main(){
    class distanc X,Y,Z;//Objects are created
    cout<<"\nInput Data for an object X"<<endl;
    X.inputdata();//public member function is called
    cout<<"Input data for an Object Y"<<endl;
    Y.inputdata();
    cout<<"Original values of an objects X"<<endl;
    X.display();
    cout<<"Displaying the private members of object X using friend function : "<<endl;
    disfriend(X);//Dot operator is not used to call the friend function
    Z = sum(X,Y);//Sum is a friend function which returns object
    cout<<"Display sum of two distances(X and Y)"<<endl;
    cout<<"using public member functions"<<endl;
    Z.display();
    cout<<"Display sum of two distances(X and Y)"<<endl;
    cout<<"using public member functions"<<endl;
    disfriend(Z);
    getchar();
    



    return 0;
}