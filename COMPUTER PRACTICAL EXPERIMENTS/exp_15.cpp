//wap to illustrate a class (student ) and print name and roll number of student using object.

#include<iostream>
using namespace std;
class student{
    int age;
    string name;
    int rollno;

    public:
    void getdata(){
        cout<<"enter name of the student : "<<endl;
    cin>>name;
    cout<<"enter age of the student : "<<endl;
    cin>>age;
    cout<<"enter roll number of the student : "<<endl;
    cin>>rollno;


    }
    void display(){
        cout<<"name of the student is -"<<name<<endl;
        cout<<"his roll number is:"<<rollno<<endl;
    }
    
};
int main(){
    student s1;
    s1.getdata();
    s1.display();
    
    return 0;
}