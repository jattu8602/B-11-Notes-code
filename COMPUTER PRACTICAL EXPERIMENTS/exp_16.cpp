/* wap to calculate area of circle using constructor in calculating area of rectangle
*/
#include<iostream>
using namespace std;
class rectangle{
    private:
    float l,b,c;
    public:
    rectangle()//costructor
    {cout<<"enter length of rectangle : "<<endl;
    cin>>l;
    cout<<"enter breadth of rectangle : "<<endl;
    cin>>b;
    cout<<"enter radius of circle : "<<endl;
    cin>>c;
     }
    void area();
    void circle();
    
};
void rectangle :: area(){
float  area = l*b;
cout<<"area of rectangle is : "<<area<<endl;
}
void rectangle :: circle(){
    float circlearea = 3.141*c*c;
    cout<<"area of circle is : "<<circlearea<<endl;
}

int main(){
    rectangle r1;
    r1.area();    
    r1.circle();
    return 0;
}