// make a calculator using switch case
#include <iostream>
using namespace std;

int main()
{
    int a, b;
    char c;
    cout << "enter two values respectiveley whose calculation you want:" << endl;
    cin >> a;
    cin >> b;
    cout << "enter the sign between them:" << endl;
    cin >> c;
    switch (c)
    {
    case '+':
    {
        cout << "sum is:" << a + b;

        break;
    }
    case '-':
    {
        cout << "subtraction is:" << a - b;

        break;
    }
    case '*':
    {
        cout << "multiplication is:" << a * b;

        break;
    }
    case '/':
    {
        cout << "division is:" << a / b;

        break;
    }
    case '%':
    {
        cout << "remainder is:" << a % b;

        break;
    }
    }
    return 0;
}