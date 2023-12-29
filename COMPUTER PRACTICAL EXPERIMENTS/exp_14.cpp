//wap to calculate factorial for a number using function
#include<iostream>
using namespace std;
int fact(int n){
    if (n>1)
    {
    return(n*fact(n-1));
    }
    else{
        return (1);
    }    
}

int main(){
    int n;
    cout<<"enter a number:"<<endl;
    cin>>n;
    cout<<"factorial of "<<n<<" is :"<<fact(n);
    
    
    return 0;
}