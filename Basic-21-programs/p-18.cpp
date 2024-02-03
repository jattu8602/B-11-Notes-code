#include<iostream>
#include<stdio.h>
using namespace std;
struct student{
    int rollno;
    char name[20];
    char branch[20];
    int marks[5];
    char result;
    int age;

};
   
int main(){
    student X[2];
    int total =0;
    for (int j = 0; j <2; j++)
    {
       cout<<"enter information for student "<<j+1<<endl;
       cout<<"enter roll number:"<<endl;
       cin>>X[j].rollno;
       cout<<"enter the name:"<<endl;
       cin>>X[j].name;
       cout<<"enter the branch:"<<endl;
       cin>>X[j].branch;
       cout<<"enter marks scored in different subjects :"<<endl;
       for (int i = 0; i < 5; i++)
       {
        cin>>X[j].marks[i];
       }
       cout<<"enter the age:"<<endl;
       cin>>X[j].age;
       for (int i = 0; i < 5; i++)
       {
       total = total + X[j].marks[i];
       }
       float avg = total/5;
       if (avg>=75){X[j].
        result= 'H';
       }
       else if (avg>=65)
        {
            X[j].result= 'F';
        }
        else{
           X[j].result= 'S'; 
        }
        
        
       }
       for (int j = 0; j < 2; j++)
       {
       cout<<"result for student:"<<j+1<<endl;
       cout<<"Roll number:"<<X[j].rollno<<endl;
       cout<<"Name:"<<X[j].name<<endl;
       cout<<"The branch :"<<X[j].branch<<endl;
       cout<<"marks scored in different subjects:"<<endl;
       for (int i = 0; i < 5; i++)
       {
        cout<<X[j].marks[i];

       }
       cout<<"age is:"<<X[j].age<<endl;
       cout<<"Overall result :"<<X[j].result<<endl;
       
       }
       cout<<"H: for honors, F: for fisrt division ,S: for second division"<<endl;
       
       
        return 0;
    }
    ///ise bhi fad diya doston 
    
   









   




















































