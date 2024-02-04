//to print the score card of two students using array of objects
#include<iostream>
#include<stdio.h>
using namespace std;
   class student{
    int rollno;
    char stuname[20];
    char subname[5][20];
    char branch[20];
    int marks[5];
    char grade;
    public:
    void inputdata(){
        cout<<"enter the student's information :"<<endl;
        cout<<"roll no."<<endl;
        cin>>rollno;
        cout<<"student's name"<<endl;
        cin>>stuname;;
        cout<<"branch"<<endl;
        cin>>branch;
        cout<<"enter five subject's name:"<<endl;
        for (int j = 0; j < 5; j++)
        {
            cout<<"subject name:"<<endl;
            cin>>subname[j];
        }
        for ( int k = 0; k < 5; k++)
        {
            cout<<"Marks :"<<k+1<<"subject:"<<endl;
            cin>>marks[k];
        } 
    }
    void calculate();
    void display(){
        cout<<"roll number:"<<endl;
        cout<<rollno<<endl;
        cout<<"student's name:"<<endl;
        cout<<stuname<<endl;
        cout<<"branch:"<<endl;
        cout<<branch<<endl;
        cout<<"****        Score Card         ****"<<endl;
        for (int j = 0; j < 5; j++)
        {
            cout<<"subject name:"<<endl;
            cout<<subname[j]<<endl;
            cout<<"marks:"<<endl;
            cout<<marks[j]<<endl;


        }
        cout<<"grade"<<grade<<endl;

        


    }


   };
   void student ::calculate(){
    int i,sum =0;
    float avg;
    for ( i = 0; i < 5; i++)
    {
        sum+=marks[i];

    }
    avg = sum/5;
    if (avg>75)
    {
      grade = 'H';

    }
    else if (avg>65)
    {
      grade = 'G';
      
    }
    else if (avg>50)
    {
      grade = 'A';
      
    }
    else{
      grade = 'F';
      
    }
    
   }
int main(){
    student X[2];
    int i;
    for ( i = 0; i <2; i++)
    {
       X[i].inputdata();
       X[i].calculate();

    }
    for ( i = 0; i < 2; i++)
    {
       X[i].display();

    }
    
    
    return 0;
}