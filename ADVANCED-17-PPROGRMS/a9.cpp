//to demonstrate the hierarchical inheritance implementation
#include<iostream>
#include<stdio.h>
using namespace std;
   class institute{
    private:
   char iname[20];
   int regtno;
   char principal[20];

   public:
   void enterdata(){
    cout<<"\nEnter institute,s name : ";
    cin>>iname;
    cout<<"\nEnter institute,s registration number : "<<endl;
    cin>>regtno;
    cout<<"Enter the name of head of institution : "<<endl;
    cin>>principal;


   }
   void display(){
    cout<<"** Institute,s information **"<<endl;
    cout<<"Institute name : "<<endl;
    cout<<iname<<endl;
    cout<<"Institute number : "<<endl;
    cout<<regtno<<endl;
    cout<<"Head of Institute : "<<endl;
    cout<<principal<<endl;

   }
   };
   class CSE : private institute {
    private:
    //single level inheritance with the base class 'Institute'
    char dname[20];
    char head[20];
    int intake;
    int duration;
    public:
    void readcse(){
        institute :: enterdata();
        cout<<"\n **  Enter department details  **  "<<endl;
        cout<<"Enter department name : "<<endl;
        cin>>dname;
        cout<<"Enter name of HOD : "<<endl;
        cin>>head;
        cout<<"Enter intake sanctioned : "<<endl;
        cin>>intake;
        cout<<"Enter the duration : "<<endl;
        cin>>duration;

    }
    void displaycse(){
        institute :: display();
        cout<<"\n ** Department details ** : "<<endl;
        cout<<" Department name : "<<endl;
        cout<<dname<<endl;
        cout<<"HOD of  "<<dname<<" : "<<endl;
        cout<<head<<endl;
        cout<<"Intake sanctioned in "<<dname<<" : "<<endl;
        cout<<intake<<endl;
        cout<<"The course duration of "<<dname<<" : "<<endl;
        cout<<duration<<endl;

    }

   };
   class MCA:private institute // one more single level inheritance with the same base class so hierarchical inheritance
   {
       private:
    //single level inheritance with the base class 'Institute'
    char dname[20];
    char head[20];
    int intake;
    int duration;
    public:
    void readmca(){
        institute :: enterdata();
        cout<<"\n **  Enter department details  **  "<<endl;
        cout<<"Enter department name : "<<endl;
        cin>>dname;
        cout<<"Enter name of HOD : "<<endl;
        cin>>head;
        cout<<"Enter intake sanctioned : "<<endl;
        cin>>intake;
        cout<<"Enter the duration : "<<endl;
        cin>>duration;

    }
    void displaymca(){
        institute :: display();
        cout<<"\n ** Department details ** : "<<endl;
        cout<<" Department name : "<<endl;
        cout<<dname<<endl;
        cout<<"HOD of  "<<dname<<" : "<<endl;
        cout<<head<<endl;
        cout<<"Intake sanctioned in "<<dname<<" : "<<endl;
        cout<<intake<<endl;
        cout<<"The course duration of "<<dname<<" : "<<endl;
        cout<<duration<<endl;

    }
   };

int main(){
    CSE x;
    MCA y;
    x.readcse();
    y.readmca();
    x.displaycse();
    y.displaymca();
    return 0;
}