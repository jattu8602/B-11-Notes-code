//wap to calculate area of circle by class
#include<iostream>
using namespace std;
class circle{
    private:
    int r;
    float pi = 3.14;
    public:
    void getdata(){
        cout<<"enter radius:"<<endl;
        cin>>r;

    }
    void area(){
        float a;
        a= pi*r*r;
        cout<<"area of circle is:"<<a<<endl;

    }
};
int main(){
    circle r1,r2;
    r1.getdata();
    r1.area();
    r2.getdata();
    r2.area();
    
    
     return 0;
}