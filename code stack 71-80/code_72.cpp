//class factorial 
#include<iostream>
using namespace std;
class fact{
    int a;
    int mul = 1;


    public:
    void getdata(){
        cout<<"enter a number:"<<endl;
        cin>>a;

    }
    void display(){
        for (int i = a; i =1; i--)
        { mul = mul *i;
        
        cout<<"factorial is:"<<mul<<endl;    /* code */
        }
        
        
    }
};

int main(){
    fact f1;
    f1.getdata();
    f1.display();
    
    return 0;
}