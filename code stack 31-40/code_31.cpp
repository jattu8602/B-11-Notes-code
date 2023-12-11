//print reverse order of a 4 digit number
#include <iostream>
using namespace std;

int main()
{cout<<"for reversing order of a 4 digit number :"<<endl;
    int a;
    cout << "enter a 4 digit  number:" << endl;
    cin >> a;
    int t = a;
    int sum = 0;
    int b;
    cout << "reverse order of given number " << t << " is :";

    for (int i = 1; i < 5; i++)
    {
        b = a % 10;
        a = a / 10;

        cout << b;

        

        /* code */
    }
    
    return 0;
}