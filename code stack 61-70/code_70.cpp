// get and display name of student
#include<iostream>
using namespace std;
class student{
    int counter;
    string name[100];
    public:
    void initcounter(){
    counter = 0;
    }
    void getname(){
        cout<<"enter "<<counter + 1<<" student name:"<<endl;
        cin>>name[counter];
        
    }
    void display(){
        cout<<counter + 1<<" student is :"<<name[counter]<<endl;
    }
};

int main(){
    student initcounter();
    student s1 ,s2;
    s1.getname();
    s2.getname();
    s1.display();
    s2.display();

    
    return 0;
}