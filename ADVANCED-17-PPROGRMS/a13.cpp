// to overload binary * operator using public member function
#include<iostream>
using namespace std;
   class complexnum{
    private:
    int realpart;
    int imagpart;
    public:
    void inputdata(){
        cout<<"enter realpart"<<endl;
        cin>>realpart;
        cout<<"enter imagpart"<<endl;
        cin>>imagpart;
    }
    void displaydata(){
        cout<<realpart<<" + "<<imagpart<<"i"<<endl;

    }
    complexnum operator * (complexnum Y){
        complexnum Z;
        Z.realpart = realpart * Y.realpart- imagpart*Y.imagpart;
        Z.imagpart  = realpart*Y.imagpart+imagpart*Y.realpart;
        return Z;

    }

   };
int main(){
    class complexnum A,B,C;
    cout<<"enter value for first complex number:"<<endl;
    A.inputdata();
    cout<<"The first complex number = ";
    A.displaydata();
    cout<<endl;
    
    cout<<"enter value for second complex number:"<<endl;
    B.inputdata();
    cout<<"The second complex number = ";
    B.displaydata();
    cout<<endl;
    
    cout<<"enter value for third complex number:"<<endl;
    C.inputdata();
    cout<<"The third complex number = ";
    C.displaydata();
    cout<<endl;


    return 0;
}

















