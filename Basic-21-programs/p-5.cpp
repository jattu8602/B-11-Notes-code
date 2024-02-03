//to print the fabonacci series using while loop
#include<iostream>
using namespace std;
   
int main(){
    int first = 0, second = 1, next;
    int n,i;
    cout<<"enter the number of terms in the series:"<<endl;
    cin>>n;
    cout<<"**********          The Fabonacci seires          *************"  <<endl;
    cout<<first<<"\t"<<second;
    i = 3;
    while(i<= n){
        next = first + second;
        cout<<"\t"<<next;
        first = second;
        second = next;
        i ++;

    }
    
    return 0;
}