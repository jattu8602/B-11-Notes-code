// calculate simple intrest
#include <iostream>
using namespace std;

int main()
{
    cout<<"for calculating simple intrest"<<endl;
    float SI, P, R, T;
    cout << "enter profit rate and time wrt P ,R and T" << endl;

    cout << "enter value of p" << endl;

    cin >> P;

    cout << "enter value of R" << endl;

    cin >> R;

    cout << "enter value of T" << endl;

    cin >> T;
    SI = (P * R * T) / 100;
    cout << "simple intrest is :" << SI << endl;

    return 0;
}