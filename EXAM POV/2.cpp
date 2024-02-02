// 2. wap in c++ to arrange no. in ascending order in an array

#include<iostream>
using namespace std;
   
int main(){
    int n;
    cout<<"enter the size for array:-"<<endl;
    cin>>n;
    int a[n];
    
    cout<<"enter "<< n << " elements in array"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)

        {

            if (a[i]>a[j])
            {
                int shift = a[i];
                a[i] = a[j];
                a[j] = shift;
            }
            
        }
        
    }
    cout<<"arranged element is :"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<i+1<< "  element is :  "<<a[i]<<endl;
    }
    
    
    
    return 0;
}