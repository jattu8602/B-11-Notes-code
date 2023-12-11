//Wap to take value of p as a numbers form
//and print colours like____---->>
// 1.>red;
// 2.>yellow
// 3.>pink;
// 4.>black;
//wap using switch case
#include<iostream>
using namespace std;

int main(){
    int p;
    cout<<"enter a number between 1 to 4 to find colour:"<<endl;
    cin>>p;
    switch(p){
        case 1:{cout<<"red";
        break;
        }
        case 2:{cout<<"yellow";
        break;
        }
        case 3:{cout<<"pink";
        break;
        }
        case 4:{cout<<"black";
        break;
        }
    }
    return 0;
}