//BREAK: it is a keyword ,used to terminate the loop.break is used with for ,while,do while, &switch case.

#include<iostream>
using namespace std;

int main(){
    int i;
    for(i = 1; i<=5;i++){
        cout<<i<<endl;
        if(i==3){
            break;
        }
    }
    
    return 0;
}


//CONTINUE: it is a keyword used in continuing the next iteration of the loop
// it is used with for,while,do while loops


#include<iostream>
using namespace std;

int main(){
    int i;
    for ( i = 1; i < 6; i++)
    {
        /* code */
        if(i==2){
            continue;
        }
        cout<<i<<endl;

    }
    
    return 0;
}


//GO TO : it is used to after the normal sequence of the program execution by transferrring the control to some other part of program.


#include<iostream>
using namespace std;

int main(){
     float num, average, sum = 0.0;
    int i, n;

    cout << "Maximum number of inputs: ";
    cin >> n;

    for(i = 1; i <= n; ++i)
    {
        cout << "Enter n" << i << ": ";
        cin >> num;
        
        if(num < 0.0)
        {
           // Control of the program move to jump:
            goto jump;
        } 
        sum += num;
    }
    
jump:
    average = sum / (i - 1);
    cout << "\nAverage = " << average;
    return 0;
}