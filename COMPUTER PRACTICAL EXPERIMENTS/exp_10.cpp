//wap to implement a two dimentional array for reading and printing elements of a matrix
#include <iostream> 
using namespace std; 

int main() { 
    int arr[3][3];
    
    for (int i = 1; i < 4; i++) { 
        for (int j = 1; j < 4; j++) { 
            cout<<"enter value for row "<< i<<" column "<<j<<endl;
            cin>>arr[i][j];
        } 
        cout << endl; 
    } 

    for (int i = 1; i < 4; i++) { 
        for (int j = 1; j < 4; j++) { 
            cout << arr[i][j] << " "; 
        } 
        cout << endl; 
    } 

    return 0; 
} 