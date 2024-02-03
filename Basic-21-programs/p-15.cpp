//to find the length of string,copy and compare the string using string library function
#include<iostream>
#include<string.h>
using namespace std;
   
int main(){
    char S1[]="RAJESH";
    char S2[]="KUMAR";
    cout<<"copy KUMAR into RAJESH :   "<<strcpy("RAJESH ","KUMAR")<<endl;
    cout<<"The length of string is:"<<strlen("RAJESH")<<endl;
    cout<<"Comparision of two strings    :      "<<strcmp("rajesh","kumar")<<endl;
    cout<<"copy S2 into S1 :"<<strcpy(S1,S2)<<endl;
    cout<<"The length of S2 string is :"<<strlen(S2)<<endl;
    cout<<"Commparision of two strings S1 and S2 :"<<strcmp(S1,S2);
    //firse code fat gaya
    
    return 0;
}