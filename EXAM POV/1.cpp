//1. array

//  An array in C++ is a collection of items of the same type stored at contiguous memory locations. It is a fixed-size data structure, meaning that the size of an array cannot be changed once it is declared. Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.


//    To declare an array, you need to specify the data type of the elements in the array and the number of elements in the array. For example, the following code declares an array of 10 integers:

#include<iostream>
using namespace std;
   
int main(){
    int arr[5];
    cout<<"enter 5 elements:"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout<<i+1 <<" element is =  "<<arr[i]<<endl;
            
    }

    
    
    return 0;
}