//algorithm for calculate a factorial of given number
// #include<iostream>
// using namespace std;

// int main(){
//     int a,b=1;
//     cout<<"enter a number whose factorial you want:"<<endl;
//     cin>>a;
//     for (int i = a; i >= 1; i--)
//     {
//         /* code */
//         b = b * i;
        

//     }
//     cout<<"factorial is:"<<b;
    
    

//     return 0;
// }
#include<iostream>
using namespace std;

int main(){
    int a,b=1;
   cout<<"enter a number whose factorial you want:"<<endl;
  cin>>a;
  while (a>=1)
  {b=b*a;
  a--;
    /* code */
  }
   cout<<"factorial is:"<<b;
  
    
    return 0;
}