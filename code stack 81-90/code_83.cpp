//wap to calculate greatest among two numbers using friend function 
#include<iostream>
using namespace std;
class valb;
class vala{
    public:
    int a;
    vala(){
        cout<<"enter first no:"<<endl;
        cin>>a;

    }
    friend void jatin(vala,valb);
};
class valb{
    public:
    int b;
    valb(){
        cout<<"enter second no:"<<endl;
        cin>>b;

    }
    friend void jatin(vala,valb);
};
void jatin(vala a2,valb b2){
    if (a2.a>b2.b)
    {
    cout<<"first number is greater "<<endl;
    }
    else{
        cout<<"second number is greater"<<endl;
    }
    

}


int main(){
    vala a1;
    valb b1;
    jatin(a1,b1);
    
    return 0;
}