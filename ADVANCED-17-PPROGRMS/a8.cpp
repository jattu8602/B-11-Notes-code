//to demonstrate the multilevel inheritance implementation
#include<iostream>
#include<stdio.h>
using namespace std;
   class emp{
    private:
    char ename [20];
    int eid;
    int age;
    protected:
    void enterdata(){
        cout<<"Enter the data for the employee "<<endl;
        cout<<"Enter name : ";
        cin>>ename;
        cout<<"\nEnter id : ";
        cin>>eid;
        cout<<"\nEnter age : ";
        cin>>age;

    }
    public:
    void display(){
        cout<<endl;
        cout<<"**********       Information about Employee     ********"<<endl;
        cout<<"Name of employee is : "<<ename<<endl;
        cout<<"Id is : "<<eid<<endl;
        cout<<"Age is : "<<age<<endl;

    }



   };
   class full
int main(){
    
    return 0;
}
