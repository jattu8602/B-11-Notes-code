#include<iostream>
using namespace std;
class rectangle{
    private:
    int l,b;
    public:
    rectangle()//costructor
    {
        cout<<"enter length :"<<endl;
        cin>>l;
        cout<<"enter breadth :"<<endl;
        cin>>b;
        
     }
    void area();
    
};
void rectangle :: area(){
int  area = l*b;
cout<<"area is :"<<area;
}

int main(){
    rectangle r1;
    r1.area();    
    return 0;
}