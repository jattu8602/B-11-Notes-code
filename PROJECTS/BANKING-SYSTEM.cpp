//
#include<iostream>
#include<fstream>
#include<string>
#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
using namespace std;
//This menu class displays the menu
class Menus{
    public:
    void showmenu(void);
    private:
    void closemenu(void);
};
//The class displays all the Customers Account related Functions 
class dispRecord{
    public:
    void addDetails(int ,char name[30],char adress[60],float );
    void displayCustomers(void);
    void deleteAccount(int);
    void updateBalance(int,float);
    void updateCustomer(void);
    int lastAccount(void);
    int accountExists(int);
    char *getName(int);
    char *getAdress(int);
    float getBalance(int);
    int getRecord(int);
    void display(int);
    void displayList(void);
    int AccountNumber;
    char name[50],adress[50];
    float intBalance;



};
//The class has all the transaction related methods
class accountTransactions{
    public:
    void new_account(void);
    void closeAccount(void);
    void display_account(void);
    void transaction(void);
    void addDetails(int,int,int,int,char,char typeTransaction[15],float,float,float);
    void deleteAccount(int);
    int dateDiffer(int,int,int,int,int,int);
    float getIntrest(int,float);
    void display(int);
    void showAccount(int);
    int AccountNumber;//variable for account number
    char trantype[10];//variable of cheque or cash input or output
    int dday,mmonth,yyear;//transaction date
    char transactions;//type of transactions - Deposite or Withdrawl of Amount
    float intIntrest,intAmount,intBalance;
    static float calcIntrest;
    void showIntrest(void);//added


    };
    //showmenu() method to display the main menu in the application
    void Menus :: showmenu(void){
        char choice;
        while (1){
            cout<<"\n       --Welcome to Banking System Application--       "<<endl;
            cout<<"****************************************************************"<<endl;
            cout<<"           Choose form Options             \n";
            cout<<"---------------------------------------------------\n";
            cout<<"       1 : Open an Account \n";
            cout<<"       2 : view an Account \n";
            cout<<"       3 : show all accounts\n";
            cout<<"       4 : make a transaction\n";
            cout<<"       5 : calculate intrest\n";
            cout<<"       6 : close an account\n";
            cout<<"       7 : exit\n";
            cout<<"       Please select a choice : "<<endl;
            cin>>choice;
            if(choice == '1'){
                accountTransactions objAT;
                objAT.new_account();
            }
            else if(choice == '2'){
                accountTransactions objAT;
                objAT.display_account();
            }
            else if(choice == '3'){
                dispRecord newRec;
                newRec.displayCustomers();
            }
            else if(choice == '4'){
                accountTransactions objAT;
                objAT.transaction();
            }
            else if (choice = '5'){
                accountTransactions objAT;
                objAT.showIntrest();
            }
            else if(choice = '6'){
                closemenu();
            }
            else if(choice = '7'){
                cout<<"\n      Thanks for using this applicaiton. Please press any key to exit :\n";
                getchar();
                break;
            }
            
        }

    }

    //closemenu() method displays the closing of the account of the costomer in the Application
    void Menus :: closemenu(){
        char choice;
        while (1)
        {
            cout<<"         ----Close Menu----              "<<endl;
            cout<<"*****************************************************"<<endl;
            cout<<"             1 : Close/Delete an Account"<<endl;
            cout<<"             0 : Exit form this menu "<<endl;
            cout<<"             Select a choice :"<<endl;
            choice = getchar();
            if (choice == '1')
            {
               accountTransactions at;
               at.closeAccount();
               break;
            }
            else if(choice == '0'){
                cout<<"       You have entered 0 to go back to the previous Menu :"<<endl;
                getchar();
                break;
            }
            
        }
        
    }
//lastAccount() method returns the Last Account Number form the newrecords.dat file
int dispRecord :: lastAccount(void){
    fstream filename;

    filename.open("newrecords.dat", ios :: in);
    filename.seekg(0,ios :: beg);
    int count  = 0;
    while(filename.read((char *)this,sizeof(dispRecord)))
    count = AccountNumber;
    filename.close();
    return count ;


}
//getRecord() method returns the record number form the newrecords.dat file when a banking staff enters the Account Number
int dispRecord :: getRecord(int retrieve_AccNo ){
    fstream filename;
    filename.open("newrecords.dat", ios::in);
    filename.seekg(0,ios :: beg);
    int count  = 0;
    while(filename.read((char *)this,sizeof(dispRecord))){
        count++;
        if(retrieve_AccNo == AccountNumber)
        break;
        /*
        keep on counting the record till the Account Number is found and exit from the newrecords.dat file
        */
    }
    filename.close();
    return count;

    

}
//display() method display all the details of the Account Number from the newrocords.dat file
void displayRecords :: display(int retrieve_AccNo){
int record;
record  = getRecords(retrieve_AccNo);
fstream filename;
filename.open("newrecords.dat",ios :: in);
filename.seekg(0,ios::end);
}



   
int main(){
    
    return 0;
}











// aur ye code kabhi poora nahi ho saka 
// error hi error aa rahi hain