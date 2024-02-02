// 5. wap in c++ to convert given binary  number into a decimal number

#include<iostream>
#include<math.h>
using namespace std;

   int exchange(long long);

int main(){
    long long n;
    cout<<"enter a binary number :"<<endl;
    cin>>n;
    cout<<n<<"in binary +"<<exchange(n)<<"in decimal"<<endl;
    return 0;
}

int exchange(long  long n){
    int dec = 0, i = 0,rem;
    while(n!= 0){
         rem = n%10;
        n = n/10;
        dec = dec + rem*(pow(2,i));
        i++;
    }
    return dec;

}
















