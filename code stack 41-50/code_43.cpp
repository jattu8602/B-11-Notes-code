//wap to print sum of values of n matrix
#include<iostream> 
using namespace std;

int main()

{
    int arr[4][2];
    int sum = 0;
cout<<"enter 8 numbers:"<<endl;
for (int x = 0; x < 4 ; x++)   // Outer for loop for traversing rows
   {
      for(int y = 0; y < 2 ; y++)   // Inner for loop for traversing columns
      {
         cin>>arr[x][y];
         sum=sum+arr[x][y];
           // Print individual array element
      } 
      
      
   }
   cout<<"sum is :"<<sum<<endl;
   return 0;
}
