//wap in c++ to implement push and pop operation on the stack

#include<iostream>
#define size 10
using namespace std;
   class LIFO {
    private:
    int stack[size];
    int top;
    public:
    LIFO(){
      top = -1;
    }
    void push(int NUM){
      if (top ==size-1){
        cerr<<"stack is full-Overflow"<<endl;

      }
      else{
        top++;
        stack[top]= NUM;
        display();
        
      }}

      void pop(){
        if(top ==-1){
          cerr<<"stack is empty-Underflow"<<endl;
        }
        else{
          cout<<"number popped is:"<<stack[top]<<endl;
          top--;
        }
        display();

      }
      void display(){
        cout<<endl;
        cout<<"stack contains"<<endl;
        for (int i = 0; i <= top; i++)
        {
          cout<<stack[i]<<"    ";

        }
        
      }
      




   };
int main(){
  LIFO STK;
  int change= 0, num;
  while(change == 0){
    cout<<"********** stack Operation  menu ********"<<endl;
    cout<<"0. PUSH"<<endl;
    cout<<"2. POP"<<endl;
    cout<<"enter the choice (1 for exit)"<<endl;
    cin>>change;
    switch (change){
      case 0:
      cout<<"enter the number of push";
      cin>>num;
      STK.push(num);
      break;
      case 2:
      STK.push(num);
      break;
      default:
      cout<<"illlegal option"<<endl;


    }

  }
  
  return 0;
}