//to initialize the array elements and display them
#define max 5;
#include<iostream>
using namespace std;
   
int main(){
    int X[5]={2,3,4,5,1};
    float Y[5]={12.2,3.4,5.4,7.8,56.7};
    int A[5]={12,25,38};
    float B[5]={11.2,23.1,2.05};
    int i;
    cout<<"*      Array  X    *"<<endl;
    for (int i = 0; i < 5; i++)
    {
       cout<<"display vlaue of X["<<i<<"]:"<<X[i]<<" "<<endl;

    }
    cout<<"*      Array  Y    *"<<endl;
    for (int i = 0; i < 5; i++)
    {
       cout<<"display vlaue of Y["<<i<<"]:"<<Y[i]<<" "<<endl;

    }
    cout<<"*      Array  A    *"<<endl;
    for (int i = 0; i < 5; i++)
    {
       cout<<"display vlaue of A["<<i<<"]:"<<A[i]<<" "<<endl;

    }
    cout<<"*      Array  B    *"<<endl;
    for (int i = 0; i < 5; i++)
    {
       cout<<"display vlaue of B["<<i<<"]:"<<B[i]<<" "<<endl;

    }
    

   
    

    return 0;
}