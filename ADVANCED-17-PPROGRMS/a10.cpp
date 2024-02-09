//to demonstrate the hybrid inheritance implementation
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
        cout<<"enter institute's name:"<<endl;
        cin>>iname;
        cout<<"enter institute's registration number"<<endl;
        cin>>regtno;
        cout<<"enter the name of head of institution"<<endl;
        cin>>principal;

    }
    void display(){
        cout<<endl;
        cout<<"institute's information"<<endl;
        cout<<"institute name:"<<iname<<endl;
        cout<<"registration number is:"<<regtno<<endl;
        cout<<"head of institition"<<principal<<endl;

    }
    

   };
   class CSE: public virtual institute{
        //note the position of virtual
        char dname[20];
        char head[20];
        int intake;
        int duration;
        public:
        void readcse(){
            cout<<"enter department details "<<endl;
            cout<<"enter department name:"<<endl;
            cin>>dname;
            cout<<"enter name of HOD:"<<endl;
            cin>>head;
            cout<<"enter intake sanctioned:"<<endl;
            cin>>intake;
            cout<<"enter the duration:"<<endl;
            cin>>duration;

        }
        void displaycse(){
            cout<<endl;
            cout<<"department details"<<endl;
            cout<<"department name:"<<dname<<endl;
            cout<<"hod of dname:"<<head<<endl;
            cout<<"intake sanctioned in "<<dname<<" "<<intake<<endl;
            cout<<"the course duration "<<dname<<" "<<duration<<endl;



        }
        
    };
    class MCA:virtual public institute{
        //note the position of virtual
        private:
        char dname[20];
        char head[20];
        int intake ;
        int duration;
        public:
         void readmca(){
            cout<<"enter department details "<<endl;
            cout<<"enter department name:"<<endl;
            cin>>dname;
            cout<<"enter name of HOD:"<<endl;
            cin>>head;
            cout<<"enter intake sanctioned:"<<endl;
            cin>>intake;
            cout<<"enter the duration:"<<endl;
            cin>>duration;

        }
        void displaymca(){
            cout<<endl;
            cout<<"department details"<<endl;
            cout<<"department name:"<<dname<<endl;
            cout<<"hod of dname:"<<head<<endl;
            cout<<"intake sanctioned in "<<dname<<" "<<intake<<endl;
            cout<<"the course duration "<<dname<<" "<<duration<<endl;



        }

    };
    class discipline:private CSE,private MCA{
        char president[10];
        char branch[20];
        int age;
        int enrollno;
        public:
        void getdiscipline(){
            enterdata();
            readcse();
            readmca();
            cout<<"enter information for discipline committee:"<<endl;
            cout<<"enter the name of president:"<<endl;
            cin>>president;
            cout<<"enter the branch of the president:"<<endl;
            cin>>branch;
            cout<<"enter age of the president :"<<endl;
            cin>>age;
            cout<<"enter enrollment number:"<<endl;
            cin>>enrollno;


        }
        void displaydiscipline(){
            display();
            displaycse();
            displaymca();
            cout<<"information for discipline comittee:"<<endl;
            cout<<"the name of president:"<<president<<endl;
            cout<<"the branch of the president:"<<branch<<endl;
            cout<<"the age of the president:"<<age<<endl;
            cout<<"the enrollment number:"<<enrollno<<endl;

        }

    };
int main(){
    discipline X;
    X.getdiscipline();
    X.displaydiscipline();
    

    return 0;
}