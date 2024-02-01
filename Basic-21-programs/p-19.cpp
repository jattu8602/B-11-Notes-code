//to read and display the students information using nested structures and function
#include<iostream>
using namespace std;
   struct date
    {int day;
    char month[10];
    int year;
    };


    struct student{
        int rollno;
        char name[20];
        char branch[20];
        int marks[5];
        date bdate;
        int age;
        char result;


    };

int main(){
    student X[2];
    int total = 0;
    void display(student []);
    for (int i = 0; i < 2; i++)
    {
        cout<<"enter information for student "<<i+1<<endl;
        cout<<"enter roll number "<<endl;
        cin>>X[i].rollno;
        cout<<"enter the name"<<endl;
        cin>>X[i].name;
        cout<<"enter the branch:"<<endl;
        gets(X[i].branch);
        cout<<"enter marks scored in different subjects:"<<endl;
        for (int j = 0; j < 5; j++)
        {
            /* code */
            cin>>X[i].marks[j];

        }
        cout<<"enter birth date like 20 jan 2004"<<endl;
        cin>>X[i].bdate.day;
        gets(X[i].bdate.month);
        cin>>X[i].bdate.year;
        cout<<"enter the age:"<<endl;
        cin>>X[i].age;
        for ( int j = 0; j < 5; j++)
        {
            total = total + X[i].marks[j];

        }
        float avg = total/5;
        if (avg>=75)
        {
            /* code */
            X[i].result = 'H';

        }
        else{
            if (avg >= 65){
                X[i].result = 'F';}
                else{
                    X[i].result = 'S';

                }
                
            }
            display(X);

        }

        






        
        
        

        
    return 0;
    }
    void  display(student X[2]){
            for (size_t i = 0; i <2; i++)
            {
                /* code */
                cout<<"***************************************************************"<<endl;
                cout<<"result for student "<<endl;
                cout<<"roll number"<<X[i].rollno<<endl;
                cout<<"name is "<<X[i].name;
                cout<<"having branch"<<X[i].branch;
                cout<<"marks scored in different subjects:"<<endl;
                for (int j = 0; j < 5; j++)
                {
                    /* code */
                    cout<<X[i].marks[j]<<"\t";
                    
                }
                cout<<"birth date:"<<endl;
                cout<<X[i].bdate.day<<"-"<<X[i].bdate.month<<"-"<<X[i].bdate.year<<endl;
                cout<<"age is"<<X[i].age;
                cout<<"overall result is "<<X[i].result;
                cout<<"H: for honors, F:first division, S:second division";
                
                
            }
            

        }
    
    


    



