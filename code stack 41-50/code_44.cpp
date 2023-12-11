// wap to enter two matirx and print sum of two matrices stored in third matrix
#include<iostream> 
using namespace std;

int main()

{
    int arr1[4][2],arr2[4][2] ;
cout<<"enter 16 numbers:"<<endl;
for (int x = 0; x < 4 ; x++)   // Outer for loop for traversing rows
   {
      for(int y = 0; y < 2 ; y++)   // Inner for loop for traversing columns
      {
         cin>>arr1[x][y] ;   // Print individual array element
      }
      
   }
   for (int x = 0; x < 4 ; x++)   // Outer for loop for traversing rows
   {
      for(int y = 0; y < 2 ; y++)   // Inner for loop for traversing columns
      {
         cin>>arr2[x][y] ;   // Print individual array element
      }
      
   }
   cout << "addition of two matrix is  : \n" ;
   for (int x = 0; x < 4 ; x++)   // Outer for loop for traversing rows
   {
      for(int y = 0; y < 2 ; y++)   // Inner for loop for traversing columns
      {
         cout << "\t" << arr1[x][y]+arr2[x][y] ;   // Print individual array element
      }
      cout << endl;
   }
   return 0;
}
