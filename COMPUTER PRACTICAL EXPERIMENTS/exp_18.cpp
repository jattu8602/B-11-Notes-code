//wap to implement operator overloading like "+" operator
#include<iostream>
using namespace std;
class shape {
    public:
    int x,y;
    shape (int m ,int n){
        x = m;
        y = n;
    }
    void operator+(){
        int c = x + y;
        cout<<"addition is:"<<c;
    }

};


int main(){
    shape T1(203,405);
    +T1;
    
    return 0;
}