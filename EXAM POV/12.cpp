// 12. how operator overloading is done with a simple program



/*//                  ii.>operator overloading
//it also a compile time polymorphism which is used to assign new meaning to
 an operator 
//keypoints:
//1.> this function has keyword operaator with sympol to be overloading
//2.> all operator including binary arithmetic operators and unary
 arithmetic operator
//3.> all assignemsts operators ,relational operators(>,<,=,=!) 
,except size of operators,.,::,*,->,etc.

shape*s1,s2(56);
s1 = &s2;
s2.display();
s1->display();


return type operator symbol(argument 1, argument 2)

*/









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
