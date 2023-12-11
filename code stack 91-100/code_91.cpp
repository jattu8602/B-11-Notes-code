//run time polymorphism,keypoints ,example
/*


*/
#include<iostream>
using namespace std;
class base{
    public:
    virtual void display(){
        cout<<"have a nice day jatin"<<endl;

    }

};
class derived :public base{
public:
void display(){
    cout<<"this is derived class"<<endl;

}

};

int main(){
    base *b1,c;
    
    derived d1;
    b1=&d1;
    b1->display();

    

    
    return 0;
}