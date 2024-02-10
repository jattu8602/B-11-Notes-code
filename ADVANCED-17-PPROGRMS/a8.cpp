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
   class fulltimeemp : public emp{
    float DA,HRA;
    float salary;
    public:
    void enterdata(){
        emp::enterdata();
        //the function with the same name as in derived class (ambiguity) so scope is defined by using scope resolution operator
        cout<<"\n enter salary : ";
        cin>>salary;
        cout<<"\n enter percentage of DA : ";
        cin>>DA;
        cout<<"\n enter percentage HRA : ";
        cin>>HRA;


    }
    void display(){
        cout<<"\n *****      Allowances are      *****"<<endl;
        cout<<"DA is = "<<"Rs"<<salary * DA/100<<endl;
        cout<<"HRA = "<<"Rs"<<salary*HRA/100;
        salary += (salary*(DA/100))+(salary*(HRA/100));
        cout<<"Total salary is : "<<"Rs"<<salary<<endl;

    }


   };
   class fitness : private fulltimeemp{
    //second level inheritance
    private:
    float weight;
    float height;
    char bloodgr;
    public:
    void readdata(){
        cout<<"********       Enter health Information      ********"<<endl;
        cout<<"Enter weight : ";
        cin>>weight;
        cout<<"\n Enter height : ";
        cin>>height;
        cout<<"\nEnter your bloodgroup : ";
        cin>>bloodgr;

    }
    void display(){
        cout<<"**********         Health record            ***********"<<endl;
        cout<<"weight is : "<<weight<<endl;
        cout<<"height is : "<<height<<endl;
        cout<<"blood group is : "<<bloodgr<<endl;

    }

   };
int main(){
    fitness X;
    X.readdata();
    X.display();
    getchar();
    return 0;
}
