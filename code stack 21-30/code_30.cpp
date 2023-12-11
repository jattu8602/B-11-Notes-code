// take a 4 digit number from user like ::4756
// we have to print 4+7+5+6 using for loop
#include <iostream>
using namespace std;
int main(){
     cout<<"for printing of sum of each digit of given number----->"<<endl;
    int a;
    cout << "enter a 4 digit  number:" << endl;
    cin >> a;
    int t = a;
    int sum = 0;
    int b;
    
    for (int i = 1; i < 5; i++)
    {
        b = a % 10;
        a = a / 10;

        sum = sum + b;

        

        /* code */
    }
    cout<<"sum of digits of the number "<< t<<" is:"<<sum;
    
    return 0;
}