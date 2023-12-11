//wap to enter marks of 4 subjects 
//print its total and % using for loop
#include<iostream>
using namespace std;

int main(){
    cout<<"enter 5 subjects marks:"<<endl;
    int sum = 0;
    int m;
    for (int i = 1; i < 6; i++)

    {cin>>m;
    sum = sum +m;
        /* code */
    }
    cout<<"sum of marks is :"<<sum<<endl;;
    cout<<"percentage is:"<<(sum)/5;
    return 0;
}