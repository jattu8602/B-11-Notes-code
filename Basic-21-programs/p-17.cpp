//to initialize the structure element and display its contents using dot operator
#include<iostream>
#include<stdio.h>
using namespace std;
   struct book{
    char title[20];
    char author[10];
    char publication[5];
    int pubyear;
    float price;

   }Y;

int main(){
    book X = {"oops","R K shukla","Wiley",2008,250,95};
    cout<<"enter information for Y"<<endl;
    cout<<"title"<<endl;
    cin>>Y.title;
    cout<<"author"<<endl;
    cin>>Y.author;
    cout<<"publication"<<endl;
    cin>>Y.publication;
    cout<<"publication Year"<<endl;
    cin>>Y.price;






    cout<<"The information initialized for X is :"<<endl;
    cout<<"title"<<endl;
    cout<<X.title;
    cout<<"author"<<endl;
    cout<<X.author;
    cout<<"publication"<<endl;
    cout<<X.publication;
    cout<<"publication Year"<<endl;
    cout<<X.price;





    cout<<"The information initialized for y is :"<<endl;
    cout<<"title"<<endl;
    cout<<Y.title;
    cout<<"author"<<endl;
    cout<<Y.author;
    cout<<"publication"<<endl;
    cout<<Y.publication;
    cout<<"publication Year"<<endl;
    cout<<Y.price;





    return 0;
}//fir code fat gaya
