//to demonstrate the use of union 
#include<iostream>
using namespace std;
   
int main(){
    union example{
        int rollno;
        float percentage;
        char name[10];

    };
    example X;
    cout<<"Memory occupied by  X is :"<<sizeof(X)<<endl;
    cout<<"enter information- "<<endl;
    cout<<"enter roll no:-"<<endl;
    cin>>X.rollno;
    cout<<"enter name:"<<endl;
    cin>>X.name;
    cout<<"enter percentage marks:"<<endl;
    cin>>X.percentage;
    cout<<"the result after execution "<<endl;
    cout<<"the roll no."<<X.rollno<<endl;
    cout<<"name is "<<endl;
    cout<<X.name<<endl;
    
    cout<<"the percentage marks is :"<<X.percentage<<endl;
    cout<<"size of X is still "<<sizeof(X);



    

    return 0;
}