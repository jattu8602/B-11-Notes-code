//wap to read and write a two dimentional array of 4X2

 //To print all the elements of a 2D Array

#include<iostream> 
using namespace std;

int main()

{
    int arr[4][2];
cout<<"enter 8 numbers:"<<endl;
for (int x = 0; x < 4 ; x++)   // Outer for loop for traversing rows
   {
      for(int y = 0; y < 2 ; y++)   // Inner for loop for traversing columns
      {
         cin>>arr[x][y] ;   // Print individual array element
      }
      
   }
   
   cout << "Elements of 2D Array are : \n" ;
   for (int x = 0; x < 4 ; x++)   // Outer for loop for traversing rows
   {
      for(int y = 0; y < 2 ; y++)   // Inner for loop for traversing columns
      {
         cout << "\t" << arr[x][y] ;   // Print individual array element
      }
      cout << endl;
   }
   return 0;
}
