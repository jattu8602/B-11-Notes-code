/*
The program uses two arrays,namely itemCode[] to hold the code number of items and itemPrice[] to hold the prices. A third data member count is used to keep a record of items in the list. The program uses a total of four fuctions to implement the operations to be performed on the list.
*/
//=====================================================================================
#include<iostream>
using namespace std;
   const int m = 50;
   class ITEMS{
        int itemCode[m];
        float itemPrice[m];
        int count;
        public:
        void CNT(void){
            count = 0;
            //initializes count to 0;
        }
        void getitem(void);
        void displaySum(void);
        void remove(void);
        void displayItems(void);
        };
//===================================================================================        
    void ITEMS :: getitem(void)  {
        cout<<"Enter item code : ";
        cin>>itemCode[count];
        cout<<"Enter item cost : ";
        cin>>itemPrice[count];
        count++;

    }  
    void ITEMS :: displaySum(void){
        float sum = 0;
        for (int i = 0; i < count; i++)
        {
            sum = sum + itemPrice[i];
            
        }
        cout<<"\nTotal vlaue : "<<sum<<endl;
    }
    void ITEMS :: remove(void){
        int a;
        cout<<"Enter items code : ";
        cin>>a;
        for (int i = 0; i < count; i++)
        {
          if (itemCode[i]==a)
          {
            itemPrice[i] = 0;
          }
          
        }
        
    }
    void ITEMS :: displayItems(void){
        //displaying items
        cout<<"\nCode       Price"<<endl;
        for (int i = 0; i < count; i++)
        {
            cout<<"\n"<<itemCode[i]<<"      "<<itemPrice[i];
        }
        cout<<endl;
    }


//======================================================================================
int main(){
    ITEMS order;
    order.CNT();
    int x;
    do{//do.............. while loop
    cout<<"\nYou can do the following:"<<"Enter appropriate number"<<endl;
    cout<<"1 : Add an item"<<endl;
    cout<<"2 : Display total value "<<endl;
    cout<<"3 : Delete an item"<<endl;
    cout<<"4 : Display all items"<<endl;
    cout<<"5 : Quit"<<endl;
    cout<<"What is your option ?"<<endl;
    cin>>x;

    switch(x){
        case 1 : order.getitem(); break;
        case 2 : order.displaySum(); break;
        case 3 : order.remove(); break;
        case 4 : order.displayItems(); break;
        case 5 : break;
        default : cout<<"Error in input"<<" Try again"<<endl;

    }

    }while(x != 5);//do while ends
    return 0;
}