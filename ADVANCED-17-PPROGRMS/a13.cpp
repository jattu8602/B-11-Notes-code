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
        Z.imagpart  = realpart*Y.imagpart+imagpart
    }

   };
int main(){
    
    return 0;
}

















