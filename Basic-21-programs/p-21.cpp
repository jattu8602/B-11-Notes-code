//to demonstrate pointer arithmetic operations
#include<iostream>
using namespace std;
   
int main(){
    int x = 10;
    int *ptr;
    ptr = &x;//pointer initialization
    cout<<"applying the pointer arithmetic :"<<endl;
    cout<<"ptr = "<<ptr<<endl;//displays ptr, that is , &x
    cout<<"++ptr = "<<++ptr<<endl;//increment ptr then display 
    ptr = &x;
    ptr++;//use ptr then after execution increment ptr
    cout<<"ptr++ = "<<ptr<<endl;//displays incremented ptr
    ptr = &x;
    cout<<"*ptr = "<<*ptr<<endl;//valur at ptr i.e. 10
    ptr = &x;
    cout<<"ptr++  = "<<ptr++<<endl;//use ptr then increment 
    cout<<"ptr++ "<<ptr<<endl;//it shows incremented adress
    cout<<"++ptr = "<<++ptr<<endl;//increment the content at ptr
    ptr = &x;
    cout<<"*++ptr ="<<*++ptr<<endl;//increment ptr then display the content
    ptr = &x;//at incremented ptr
    cout<<"*ptr++ = "<<*ptr++<<endl;//display then content and then increment ptr
    cout<<"ptr++= "<<ptr<<endl;//displays the  adress incremented at previous statement
    ptr = &x;
    cout<<" (*ptr)++ = "<<(*ptr)++<<endl;//displays content of ptr and content is incremented
    cout<<"*ptr:"<<*ptr<<endl;//displays the incremented content
    cout<<"ptr++ = "<<ptr<<endl;//ptr will remain same 
    





    return 0;
}