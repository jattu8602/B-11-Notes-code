//to read and display the employee information using pointer to object
#include<iostream>
#include<stdio.h>
using namespace std;
class date{
    int mm,dd,yy;
    public:
    void inputdate(){
        cin>>dd>>mm>>yy;

    }
    void displaydate(){
        cout<<dd<<" : "<<mm<<" : "<<yy;

    }


};
class emp{
    private:
    char name[20];
    char design[20];
    int age;
    date dob;//object of date class is a private member of emp class
    public:
    date doj;//object of date class is a public member of emp class
    void inputdate(){
        cout<<"\nEnter empoyee details : ";
        cout<<"\nName : ";
        cin>>name;
        cout<<"\nDesignation : ";
        cin>>design;
        cout<<"\nEnter age : ";
        cin>>age;
        cout<<"\nEnter date of birth : ";
        dob.inputdate();

    }
    void display(){
        cout<<"\nDisplay employee details ";
        cout<<"\nName : ";
        cout<<name;
        cout<<"\nDesignation : ";
        cout<<design;
        cout<<"\nAge : ";
        cout<<age;
        cout<<"\nThe date of birth : ";
        dob.displaydate();
        cout<<"\nDate of joining : ";
        doj.displaydate();

    }
};
int main(){
    emp X,*ptr1;
    ptr1 = &X;
    ptr1->inputdate();//First method of accessing the 
    cout<<"\nEnter date of joining : ";//members using arrow operator
    ptr1->doj.inputdate();
    (*ptr1).display();//Second method of accessing the members 
    getchar();

}