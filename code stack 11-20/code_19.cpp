//Wap to take value of p as a numbers form
//and print colours like____---->>
// 1.>red;
// 2.>yellow
// 3.>pink;
// 4.>black;
#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"enter a number between 1 to 4 to find colour"<<endl;
    cin>>a;
    if (a==1)
    {cout<<"red";
        /* code */
    }
    else if (a==2)
    {cout<<"yellow";
        /* code */
    }
    else if (a==3)
    {cout<<"pink";
        /* code */
    }
    else{
        cout<<"black";
    }
    
    return 0;
}