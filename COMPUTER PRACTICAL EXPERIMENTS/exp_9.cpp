// wap to illustrate arrays:
// (implement the addition of array elements)
//code -37
#include<iostream>
using namespace std;

int main(){
    int i,A[10],s=0;
    cout<<"enter 10 numbers:"<<endl;
    for (int i = 0; i < 10; i++)
    {
        cin>>A[i];
        s =s+A[i];

    }
    cout<<"sum of  the elements present in given array is :"<<s<<endl;

    
    return 0;
}