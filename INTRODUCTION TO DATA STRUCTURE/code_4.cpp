//to create and display a circular linked list

#include<iostream>
using namespace std;
   template<class T>
   class linked_list{
    struct node{
        T info;
        node *node;

    };
    node *start,*ptr,*ptr1,*newptr;
    T item;
    public:
    linked_list(){
        start = Null;

    }
    void createlist(){
        char ch;
        if(start == NULL){
            ptr = getnode();
            cout<<"enter value to insert"<<endl;
            cin>>item;
            ptr->info= item;
            ptr->next = ptr;
            start =  ptr;

        }
        else{
            ptr = start;
            while(ptr->next!=start){
                ptr = ptr->next;
                
            }
            newptr = getnode();
            cout<<"enter value to insert"<<endl;
            cin>>item;
            newptr->info= item;
            newptr->next = newptr;

        }
        cout<<"want to insert more nodes:"<<endl;
        cin>>ch;
        if(ch == 'Y'||ch== 'y'){
            createlist();

        }

    }
    node *getnode(){
        node *newptr1 = new node;
        return newptrl;

    }
    void display(){
        node *ptr1 = start;
        cout<<"the linked list is : start"<<endl;
        while(ptr->next! = start){
            cout<<"-->"<<ptr1 ->info;
            ptr1 = ptr1->next;

        }
        cout<<"-->"<<ptr1 ->info<<"-->"<<ptr->next->info;
        cout<<endl;

    }
   };
int main(){
    linked_list<int>obj;
    char ch;
    int choice;
    cout<<"**********               create and display the list of integers      *********"<<endl;
    obj.createlist();
    obj.display();

    

    return 0;
}