//to create and display the linked list in c++
#include<iostream>
using namespace std;
   template<class T>
   class linked_list{
    private:

    struct node{
        T info;
        node *next;

    };
    node *str,*ptr,*newptr;
    T item;

    public:
    linked_list(){
        start = NULL;
    }
    createlist(){
        char ch;
        ptr = getnode();
        cout<<"enter the value to insert"<<endl;
        cin>>item;
        ptr->info = item;
        ptr->next = start;
        start = ptr;
        cout<<"want to insert more nodes:"<<endl;
        cin>>ch;
        while(ch = 'Y' || ch = 'y'){
            newptr = getnode();
            cout<<"enter value to insert"<<endl;
            cin>>item;
            newptr->info = item;
            newptr->next= ptr->next;
            ptr->next = newptr;
            ptr = ptr->next;
            cout<<"want to insert more nodes:";
            cin>>ch;

        }
    }
    node* getnode(){
        node *newptr = new node;
        return newptr;

    }
    void display(){
        node *ptr = start;
        cout<<"the linked list is: start"<<endl;
        while (ptr1! = NULL){
            cout<<"-->"<<ptr1->info;
            ptr1 = ptr1->next;
        }
        cout<<endl;
    }


   };
int main(){
    linked_list<int>obj;
    char ch;
    int choice;
    cout<<"****** create and display the list of integers    *****"<<endl;
    
    return 0;
}