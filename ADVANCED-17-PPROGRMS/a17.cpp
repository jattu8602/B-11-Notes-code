//to overload ++(pre increment) operator using member function.
#include<iostream>
using namespace std;
   class fibonacci{
    int first;
    int second;
    int next;
    public:
    fibonacci(){
        first = 0;
        second = 1;

    }
    void display(){
        cout<<"****          The fibonacci series is as below      ******"<<endl;
        cout<<"\t"<<first<<"   "<<second<<"  ";

    }
    void operator ++(){
        next = first +second;
        cout<<"next"<<"  ";
        first = second;
        second = next;

    }
   };
int main(){
    fibonacci F;
    int i,n;
    cout<<"How many terms do you want "<<endl;
    cin>>n;
    cout<<endl;
    F.display();
    for (int i = 1; i < n-1; i++)
    {
        ++F;
    }
    
    return 0;
}