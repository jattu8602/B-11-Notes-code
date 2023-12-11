/*
(.) used to use object data members;
we can use public only inside class {   }
*/
#include<iostream>
using namespace std;
class student{
    private:
    int rollno;
    char name[10];
    char course[10];
    public:
    void getdata(){
        cout<<"enter roll number:"<<endl;
        cin>>rollno;
        cout<<"enter your name:"<<endl;
        cin>>name;
        cout<<"enter your course name:"<<endl;
        cin>>course;

    }
    void display(){
        cout<<name<<" your roll number is:"<<rollno<< "\nand your course is:"<<course<<endl;
    }
};

int main(){student s1,s2,s3,s4;
s1.getdata();
s1.display();
s2.getdata();
s2.display();
// s3.getdata();
// s3.display();
// s4.getdata();
// s4.display();
    


    return 0;
}