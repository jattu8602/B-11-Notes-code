/* IMPORTANT POINTS:
1.>In operator overloading significance of operator does not change
2.>overloaded operator follows specific meaning assigned to it .
    It cannot change its meaning.
3.>overloaded operator must hold at least 1 user defined operand    

*/
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
