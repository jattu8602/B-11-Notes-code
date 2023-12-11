//wap to calculate factorial using function
#include<iostream>
using namespace std;
int fact(int);

int main(){
    
        int n;
        cout<<"enter a number "<<endl;
        cin>>n;
        cout<<"factiorial is:"<<fact(n)<<endl;

    
    return 0;
}
int fact(int a){
    int f = 1;
    while(a>=1){
        f= f*a;
        a--;

    }
    return f;

}