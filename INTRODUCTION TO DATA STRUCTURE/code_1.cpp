// To find the sum of diagonal elements , upper triangular elements and the lower triangular elements
#include<iostream>
using namespace std;
   
int main(){
    float X[3][3];
    int i,j,num;
    float sumdgl = 0,sumupper  = 0,sumlower = 0;
    cout<<"enter size of the square matrix :"<<endl;
    cin>>num;
    cout<<"******       Enter matrix elements        *******"<<endl;
    for (int i = 0; i < num; i++)
    {
       for (int j = 0; j < num; j++)
       {
        cin>>X[i][j];
        if (i ==j){
            sumdgl+=X[i][j];
        }
        else if(i<j){
            sumupper+=X[i][j];
        }
        else{
            sumlower+=X[i][j];
        }
       }
       
    }


    cout<<"***      matrix elements entered are      ****"<<endl;
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
           cout<<X[i][j]<<"   ";

        }
        cout<<endl;
        
    }
    cout<<"the sum of the diagonal elements is :"<<sumdgl<<endl;
    cout<<"the sum of the upper triangular matrix is :"<<sumupper<<endl;
    cout<<"the sum fo lower triangular matrix is :"<<sumlower<<endl;
    
    
    return 0;
}