//to print the pyramid of numbers by using nested for loop
#include<iostream>
#include<math.h>
using namespace std;
   
int main(){
    int n;
    cout<<"enter the number of rows in the pyramid:"<<endl;
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=n-i; j++)
        {
           cout<<" ";

        }
        for (int k = 1; k <=i; k++)
        {
           cout<<k;

        }
        cout<<endl;
        

        
    }
    
    return 0;
}