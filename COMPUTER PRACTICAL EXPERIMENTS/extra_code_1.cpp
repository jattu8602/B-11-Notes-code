//wap to insert and delete an element from a stack;
#include<iostream>
using namespace std;

int main(){
    int a[100],i,pos,size,item;
    cout<<"enter the size of an array:"<<endl;
    cin>>size;
    cout<<"enter array elements:"<<endl;
    for ( i = 0; i < size; i++)
    {
        cin>>a[i];
    }
    cout<<"enter position that u want to insert:"<<endl;
    cin>>pos;
    cout<<"enter item that you want to insert:"<<endl;
    cin>>item;
    for ( i = size; i>=pos; i--)
    {
        a[i]= a[i-1];
    }
    a[pos]= item;
    size++;
    
    

    
    
    return 0;
}