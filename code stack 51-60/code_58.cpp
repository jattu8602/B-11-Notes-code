// SCOPE RESOLUTION OPERATOR
/*
int t=1234;
int main(){
    int t=345;
    cout<<"local variable is:"<<t;
    cout<<"global variable is:"<<::t;

}
*/
#include<iostream>
using namespace std;
class rectangle{
    private:
    int length[4];
    int breadth[4];
    public:
    void getdata();
    void display();
};
void rectangle :: getdata(){
cout<<"enter length :"<<endl;
cin>>length[4];
cout<<"enter breadth"<<endl;
cin>>breadth[4];

    }
    void rectangle :: display(){
cout<<"area of rectangle is:"<<length[4]*breadth[4]<<endl;

    }

int main(){
    rectangle r1,r2;
    r1.getdata();
    r1.display();
    r2.getdata();
    r2.display();
    
    return 0;
}

