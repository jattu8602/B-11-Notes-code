#include<iostream>
using namespace std;
class st{
    private:
    int a,b;
    public:
    void get(){
        cout<<"enter a and b:"<<endl;
        cin>>a>>b;
    }
    void dis(){
        cout<<a+b;
    }

};
class dt :: public st{

};

int main(){
    
    return 0;
}
