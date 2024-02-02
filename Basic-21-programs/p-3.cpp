//to calculate the area if circle ,rectangle and triangle using switch case statement
#include<iostream>
#include<math.h>
using namespace std;
   
int main(){
    int choice;
    cout<<"********          selection Menu          **************"<<endl;
    cout<<"1. for area of circle"<<endl;
    cout<<"2. for area of rectangle"<<endl;
    cout<<"3. for area of triangle"<<endl;
    cout<<"enter your choice:"<<endl;
    cin>>choice;
    switch(choice){
        case 1:{
            float radius,areac;
            cout<<"enter the radius of the circle"<<endl;
            cin>>radius;
            areac = 3.141*radius*radius;
            cout<<"area of circle is :"<<areac<<endl;
            break;
        }
        case 2:{
            float length , breadth, arear;
            cout<<"enter the sides of the rectangle:"<<endl;
            cin>>length>>breadth;
            arear = length*breadth;
            cout<<"area of the rectangle is :"<<arear<<endl;
            break;

        }
        case 3:{
            float sidea,sideb,sidec,s,areat;
            cout<<"enter the three sides of the triangle"<<endl;
            cin>>sidea>>sideb>>sidec;
            s = (sidea+sideb+sidec)/2;
            areat = sqrt(s*(s-sidea)*(s-sideb)*(s-sidec));
            cout<<"the area of the triangle :"<<areat;
            break;


        }
        default:{
            cout<<"you have not selected the proper choice"<<endl;
            
        }
    }
    return 0;
}