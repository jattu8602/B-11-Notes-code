//class demo
#include<iostream>
using namespace std;
class demo{
    private:
    string a[5];
    int i;
    public:
    void get(){
        for(i = 0;i<=4;i++){
            cin>>a[i];
            }}
    void display(){
        for( i = 0; i<=4; i++)
        {cout<<a[i];}
        }
};

int main(){
    demo obj;
    obj.get();
    obj.display();
    
    return 0;
}