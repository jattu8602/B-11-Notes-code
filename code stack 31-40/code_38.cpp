//wap to  find maximum value of an array
#include<iostream>
using namespace std;

int main(){
    int i,max,A[10];
    cout<<"enter 10 values in sequence:"<<endl;
    for (i = 1; i <= 10; i++)
    {
        /* code */
        cin>>A[i];
        max=0;

    }
    for (i = 1; i <= 10; i++)
    {
        /* code */
        if (A[i]>max)
        {
            /* code */
            max=A[i];

        }
        
    }
    cout<<"maximum of given values is:"<<max<<endl;
    return 0;
}