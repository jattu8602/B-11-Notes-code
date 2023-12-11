// wap to enter two matirx and print multiplication of two matrices stored in third matrix
#include<iostream>
using namespace std;

int main(){
    int a[3][3],b[3][3],c[3][3];
    cout<<"enter 18 values:"<<endl;
    int i,j,k;

    for ( i = 1; i < 4; i++)
    {for ( j = 1; j < 4; j++)
    {cin>>a[i][j];
    }}
    for ( i = 1; i < 4; i++)
    {for ( j = 1; j < 4; j++)
    {cin>>b[i][j];
    }}
    for ( i = 1; i < 4; i++)
    {for ( j = 1; j < 4; j++)
    {c[i][j];
    for ( k = 1; i < 4; k++)
    {c[i][j]=c[i][j]+a[i][k]*b[k][j];
        /* code */
    }}}
    for ( i = 1; i < 4; i++)
    {for ( j = 1; j < 4; j++)
    {cout<<c[i][j];
    }}
    
    return 0;
}