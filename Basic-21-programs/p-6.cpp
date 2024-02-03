//to check wheather the given number is palindrome using the do while looop
#include<iostream>
using namespace std;
   
int main(){
    int orinum, chnum, rev=0,digit;
    cout<<"enter the number :"<<endl;
    cin>>orinum;
    chnum = orinum;
    do{
        digit = chnum%10;
        rev = rev*10+digit;
        chnum = chnum/10;

    }while(chnum!=0);
    if(orinum==rev){
        cout<<"number is palindrome"<<endl;
        
    }
    else{
        cout<<"number is not palindrome"<<endl;
        
    }
    return 0;
}