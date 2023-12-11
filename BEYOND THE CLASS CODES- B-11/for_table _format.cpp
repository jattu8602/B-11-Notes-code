//learn a table format for printing data in row and column wise

#include<iostream>
#include<windows.h>
using namespace std;
class tech{
    private:
    char name[10],fname[20];
    int roll,cs,math,phy,mech,civil,total;
    float avg;
    public:
    void getdata(){
        cout<<"enter your name:"<<endl;
        cin>>name[10];
        cout<<"enter your roll number:"<<endl;
        cin>>roll;
        cout<<"enter your father's name:"<<endl;
        cin>>fname[20];
        cout<<"enter marks of computer science:"<<endl;
        cin>>cs;
        cout<<"enter marks of civil:"<<endl;
        cin>>civil;
        cout<<"enter marks of math:"<<endl;
        cin>>math;
        cout<<"enter marks of mechanical engineering:"<<endl;
        cin>>mech;
        cout<<"enter marks of physics:"<<endl;
        cin>>phy;
        total = cs+civil+math+mech+phy;
        avg= total/4;
    }
    void display(){
        
    }
    void gotoxy(short x,short y){
    COORD pos {x,y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);

}};


int main(){
    tech t1;
    t1.getdata();


    
   return 0;
}