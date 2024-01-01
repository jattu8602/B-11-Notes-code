/*
wap to illustrate an one dimentional array of searching an element present in an array or not
(linear search)
*/
#include<iostream>
using namespace std;
int main()
{
    
    cout<<"Enter 10 Numbers: "<<endl;
    int arr[10], i, num, index;
    for(i=0; i<10; i++){
        cin>>arr[i];}
    cout<<"Enter a Number to Search: "<<endl;
    cin>>num;
    for(i=0; i<10; i++)
    {
        if(arr[i]==num)
        {
            index = i;
            break;
        }
    }
    cout<<"Found at Index No."<<index+1<<endl;
    cout<<endl;
    return 0;
}