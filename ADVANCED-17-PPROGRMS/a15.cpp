//to overload binary > operator for the objects using public member function
#include<iostream>
using namespace std;
   class sample {
    int example;
    public:
    void inputdata(){
        cout<<"Eneter value of example:"<<endl;
        cin>>example;

    }
    void displaydata(){
        cout<<example;
    }
    int operator > (sample);

   };
   int sample::operator > (sample Y){
    if (example>Y.example){
        return(1);

    }
    else{
        return(0);
    }
   }
int main(){
    class sample A,B;
    cout<<"enter values for first object A"<<endl;
    A.inputdata();
    cout<<"the fisrt object ="<<endl;
    A.displaydata();
    cout<<endl;
    cout<<"enter values for second object B"<<endl;
    B.inputdata();
    cout<<"the second object = "<<endl;
    B.displaydata();
    cout<<endl;
    if(A>B){
        cout<<"Object A is greater "<<endl;
    }
    else{
        cout<<"object B is greater";
    }
    return 0;
}