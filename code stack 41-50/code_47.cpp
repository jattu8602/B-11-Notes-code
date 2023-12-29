// wap to enter two matirx and print multiplication of two matrices stored in third matrix and now you have to print it
#include<iostream>
using namespace std;
int main()
{
    int A[3][3];
    for(int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            cout<<"enter the value of row "<<i+1<<" column "<<j+1<<" : ";
            cin>>A[i][j];
        }
        cout<<endl;
    }
    int B[3][3];
    for(int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            cout<<"enter the value of row "<<i+1<<" column "<<j+1<<" : ";
            cin>>B[i][j];
        }
        cout<<endl;
    }
    cout<<"Solve the Matrix:-"<<endl;
    int C[3][3]={{0,0,0},{0,0,0},{0,0,0}};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<3;k++)
            C[i][j]+=A[i][k]*B[k][j];
        }
        cout<<endl;
    }
    cout<<"Matrix A is :-"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Matrix B is :-"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<B[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Result Matrix C is :-"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}