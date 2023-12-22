//wap to overload a constructor calling for initlizing with various parameters
#include<iostream>
using namespace std;
class shape{
    int x;
    public:
    
    shape(){
        x = 10;
    }
    shape(int y){x = y;}

int display(){
    cout<<"number is:"<<++x<<endl;

    
    return 0;
}};
int main(){
    shape s1,s2(55);
    s1.display();
    s2.display();
}
