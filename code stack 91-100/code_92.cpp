//call by value
#include<iostream>
using namespace std;
class swap1
{
    public:
    int a,b;
    swap1(int x,int y){
        
        int temp = y;
        y = x;
        x = temp;
       a=x;
       b=y;
    }
    void display()
    {

        cout<<"interchange values are::"<<a<<"\n"<<b;
    }
};

int main(){
    swap1  s1(12,34);
    s1.display();
    
    
    return 0;
}