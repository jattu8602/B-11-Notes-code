//to initialize the two dimentional array elements and display them
#include<iostream>
using namespace std;
   
int main(){
    int X[3][2]={2,3,4,5,54,54};
    int i,j;
    int Y[3][2]= {1,2,3,4};
    int Z[3][2];
    cout<<"displaying elements of X"<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
           cout<<X[i][j]<<"  ";
        }
        cout<<endl;

        
    }
    cout<<"displaying elements of Y"<<endl;
   for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
           cout<<Y[i][j]<<"  ";
        }
        cout<<endl;

        
    }
    cout<<"enter elements of Z"<<endl;
   for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
           cin>>Z[i][j];
        }
        cout<<endl;
        

        
    }
     cout<<"displaying elements of Z"<<endl;
   for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
           cout<<Z[i][j]<<"  ";
        }
        cout<<endl;


        
    }
    

    return 0;
}