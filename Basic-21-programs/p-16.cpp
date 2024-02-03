//to find the greatest and smallest elements in an array by passing an array to a function
#include<iostream>

using namespace std;
   
int main(){
    float X[10];
    int i,num;
    cout<<"Enter the size of the array :"<<endl;
    cin>>num;
    cout<<"Enter array element "<<endl;
    for (int i = 0; i < num; i++)
    {
     cin>>X[i];
     int maxmin(float [],int );
     int max = maxmin(X,num);
     cout<<"The greatest element in the array is:"<<max<<endl;


    }
    
    
    return 0;
}
int maxmin(float X[],int n){
        float max = 0,min = X[0];
        for (int i = 0; i < n; i++)
        {
           if (max = X[i])
           {
        min = X[i];

           }
           if (X[i]<min)
           {
           min = X[i];
           }
           
           
        }
        cout<<"The smallest element in the array is:"<<min<<endl;

        
    };