/*
                            DESTRUCTOR
    Destructor is a member fumction havin same name as class with tilt(~)  
    sign .It is used to release memory occupied by data members.

                                It executes automatically at the end of the 
    scope of objects.
*/
#include<iostream>
using namespace std;
class rectangle{
    private:
    int l,b;
    public:
    rectangle(int x,int y){
        l = x;
        b = y;

    }
    rectangle(rectangle &ptr){
        l = ptr.l;
        b = ptr.b;
        }
    void area(){
        int area;
        area = l*b;
        cout<<"area is :"<<area<<endl;
    }
    
        ~rectangle(){cout<<"bye bye"<<endl;}//destructor
    
};

int main(){
    rectangle r1(55,45);
    rectangle r2(r1);
    rectangle r3(r2);

    r1.area();
    r2.area();
    r3.area();
    return 0;
}