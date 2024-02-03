//to demonstrate the initialization the character array
#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
   
int main(){
    char name[15];
    char stuname[]="neha";
    char junname[]= {'S','m','r','i','\0'};
    int i,len = 0,lenR=0;
    cout<<"enter the name          :"<<endl;
    cin>>name;
    for ( i = 0; stuname[i] <= '\0'; i++)
    {
        len = len +1;
        for ( i = 0; name[i]< '\0'; i++)
        {
           lenR= lenR+1;
        }
        int lenj = strlen(junname);
        cout<<"Name initialized string:"<<stuname<<endl;
        cout<<"The number of characters in  "<<stuname<<"  are:"<<len;
        cout<<"Name read               :"<<name<<endl;
        cout<<"The number of characters in "<<name<<"  are :"<<lenR<<endl;
        cout<<"Name initialized string(character)        :"<<junname<<endl;
        cout<<"The number of characters in       "<<junname<<"       are      :"<<lenj<<endl;
    }
    //code fat gaya sorry

    
    return 0;
}