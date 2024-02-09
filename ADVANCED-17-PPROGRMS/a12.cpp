//to show the constructor function overlooading
#include<iostream>
using namespace std;
   class sample{
    int n1,n2;
    float n3;
    public:
    sample(){
        cout<<"CONSTRUCTOR WITH NO PARAMETER IS CALLED"<<endl;
        cout<<"enter initial vlaue for data members:"<<endl;
        cout<<"first number here = ";
        cin>>n1;
        cout<<"second number here = ";
        cin>>n2;
        cout<<"third number here = ";
        cin>>n3;

    }
    sample(int a,int b, int c){
        n1 = a;
        n2 = b;
        n3 = c;

    }
    void displaydata(){
        cout<<"first vlaue = "<<n1<<endl;
        cout<<"second value = "<<n2<<endl;
        cout<<"third value = "<<n3<<endl;
    }
   };
int main(){
    cout<<endl;
    class sample X;
    cout<<"********      NOW DISPLAY THE VALUES      ********"<<endl;
    X.displaydata();
    cout<<"\n\nTo call parameterized constructor"<<endl;
    int i1,i2;
    float f1;
    cout<<"enter first number:"<<endl;
    cin>>i1;
    cout<<"enter second number:"<<endl;
    cin>>i2;
    cout<<"enter float number:"<<endl;
    cin>>f1;
    class sample Y(i1,i2,f1);
    cout<<"********      NOW DISPLAY THE VALUES      ********"<<endl;
    Y.displaydata();


    return 0;
}