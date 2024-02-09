/*
               

*/
#include<iostream>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#define new_cal 1
#define old_cal 0
//stand_calc class to define standard calculator functions
using namespace std;
   class stand_calc{
    /*
    Prototyping of standard calculator functions. These functions are static, therefore calling of these functions is possible with the name of the class.There is no need to create an object of the class.

    */
   public:
   static double addition(double,double);
   static double subtraction(double,double);
   static double multiplication(double,double);
   static double division(double,double *);
   static double modulus(double *,double *);

   };
   //scien_calc class to define scientific calculator functions
   class scien_calc{
        static double square(double);
        static double cube(double);
        static double power(double,double);
        static double sq_root(double);
        static long int fact(double);;
        static double sin_func(double);
        static double cos_func(double);
        static double tan_func(double);

   };
   //addition function will add two numbers
   double stand_calc :: addition(double a,double b)
   {
    return(a+b);

   }
   //subtract function will subtract  the second number form the first number
   double stand_calc :: subtraction(double a,double b)
   {
    return(a-b);

   }
   //multiplication functon will multiply two numbers
   double stand_calc :: multiplication(double a,double b)
   {
    return(a*b);

   }
   //division function will divide the first number by the second number. This function accepts two arguments .One is copy of a variable and another is pointer type because if accepting divisor is zero ,then this function will show a message to enter the divisor again . Using pointer means that the entered value of the divisor for this function should be updated at the main function also.
   double stand_calc :: division(double a,double *b){
    while (*b == 0){
        cout<<"\nCannot divide by zero"<<endl;
        cout<<"Enter second number again : ";
        cin>>*b;

    }
    return (a/(*b));
   }
   //Modulus function will divide the first number by the second number and return the remainder part of the division . Similar to division function, it will not accept zero in the divisor . Modulus cannot be performed on a double number, so we need to convert it into an integer.
   double stand_calc :: modulus(double *a,double *b){
    while (*b = 0){
        cout<<"\n Cannot divide by zero "<<endl;
        cout<<"Enter second number again : ";
        cin>>*b;

    }
    //Conveerting double into an integer
    int x  = (int )*a;
    int y = (int )*b;
    if (*a-x>0||*b-y>0)
    cout<<"\nConverting decimal number into an integer to perform modulus:";
    *a =  x;
    *b = y;
    return(x%y);
    
    
   }
   //Declaration of scien_calc class functions starts form here.
   //Square function of scien_calc class to return accepting number to the power 2 
   double scien_calc :: square(double x){
    return (pow(x,2));
   }
   //cube function of scien_calc class to return accepting number to the power 3
   double scien_calc :: cube(double x){
    return(pow(x,3));
   }
   //power function of scien_calc class to return the first number to the power of the second number 
   double scien_calc :: power(double x,double y){
    return(pow(x,y));

   }
   //sq_root function of scien_calc class to return the square root of the entered number 
   double scien_calc :: sq_root(double x){
    return(sqrt(x));
   }
   //fact function of the scien_calc class to return a long integers as factorial of an accepting number .This will convert accepting number into an integer before calculating the factorial
   long int scien_calc :: fact(double x){
    int n = (int )x;
    long int f = 1;
    while  (n>1){
        f*= n;
        n--;
    }
    return f;
   }
   //sin_function of the scien_clac class to return the sin value of x
   double scien_calc :: sin_func(double x){
    return(sin(x));

   }
   //cos_func of the scien_calc class to return the tan value of x
   double scien_calc :: tan_func(double x){
    return(tan(x));

   }
   //Displaying the menus to enter the options and vlaues

int main(){
    double num1,num2,num3,temp;
    int choice1 = 0,choice2,flag;
    //loop of main menu form where the prograns starts.It will show the menu to choose the type of calculator
    do{
        cout<<"===================Type of Calculators==================="<<endl;
        cout<<"\n1\tStandard Calulator \n2\tScientific Calculator\n3\tQuit";
        cout<<"\nChoose the type of calculator : ";
        cin>>choice1;
        flag  = new_cal;
        //To perform an operation according to the entered option in the main menu
        switch (choice1)
        {
        case 1 :
            //loop to display the standard calculator menu
            do
            {
               cout<<"=========Standard Calculator================";
               cout<<"\n1\tAddition\n2\tSuubtraction\n3\tMultiplication\n4\tDivision\n5\tModulus\n6\tReturn to previous Menu\n\7Quit";
               //option 8 will be displayed only when working on old calculations.Here ,already a number is saved in the claculator memory
               if(flag ==old_cal)
               cout<<"\n8\tClear Memory";
               cout<<"\nChoose the type of calculation : ";
               cin>>choice2;
               //to perform operation and call functions of the stand_calc
               switch(choice2){
                case 1:
                //if a new calculation is there,then accept the first number else previous calculation result will be the first number
                if(flag == new_cal){
                    cout<<"Enter first number : ";
                    cin>>num1;
                }
                else{
                    num1 = temp;
                    cout<<"\nFirst number is "<<num1<<endl;

                }
                cout<<"Enter second number : ";
                cin>>num2;
                num3 = stand_calc :: addition(num1,num2);
                cout<<"\\nAddition of "<<num1<<" and "<<num2<<" is "<<num3;
                cout<<"\nPress any key to continue...............";
                getchar();
                temp  = num3;
                flag = old_cal;
                break;
               case 2:
               if (flag==new_cal)
               {
                cout<<"Enter first number : ";
                cin>>num1;
               }
               else{
                num1 = temp;
                cout<<"\nFirst numbers : "<<num1<<endl;

               }
               cout<<"Enter second number : ";
               cin>>num2;
               num3=stand_calc :: subtraction(num1,num2);
               cout<<"\nSubtraction of "<<num2<<" from "<<num1<<" is : "<<num3<<endl;
               cout<<"Press any key to continue.................."<<endl;
               getchar();
               temp  = num3;
               flag = old_cal;
               break;
               case 3:
               if (flag ==new_cal)
               {
                cout<<"Enter first number : ";
                cin>>num1;

               }
               else{
                num1 = temp;
                cout<<"\nFirst numbers : "<<num1<<endl;

               }
               cout<<"Enter second number : ";
               cin>>num2;
               num3=stand_calc :: multiplication(num1,num2);
               cout<<"\nSubtraction of "<<num2<<" from "<<num1<<" is : "<<num3<<endl;
               cout<<"Press any key to continue.................."<<endl;
               getchar();
               temp  = num3;
               flag = old_cal;
               break;
               case 4:
               if (flag ==new_cal)
               {
                cout<<"Enter first number : ";
                cin>>num1;

               }
               else{
                num1 = temp;
                cout<<"\nFirst numbers : "<<num1<<endl;

               }
               cout<<"Enter second number : ";
               cin>>num2;
               num3=stand_calc :: division(num1,&num2);
               cout<<"\nSubtraction of "<<num2<<" from "<<num1<<" is : "<<num3<<endl;
               cout<<"Press any key to continue.................."<<endl;
               getchar();
               temp  = num3;
               flag = old_cal;
               break;
               case 5:
               if (flag ==new_cal)
               {
                cout<<"Enter first number : ";
                cin>>num1;

               }
               else{
                num1 = temp;
                cout<<"\nFirst numbers : "<<num1<<endl;

               }
               cout<<"Enter second number : ";
               cin>>num2;
               num3=stand_calc :: modulus(&num1,&num2);
               cout<<"\nSubtraction of "<<num2<<" from "<<num1<<" is : "<<num3<<endl;
               cout<<"Press any key to continue.................."<<endl;
               getchar();
               temp  = num3;
               flag = old_cal;
               break;
               case 6:
               cout<<"\nReturning to previous menu : ";
               cout<<"\nPress any key to continue..............";
               getchar();
               break;
               case 7:
               cout<<"\nQuitting...............................";
               cout<<"\nPress any key to continue..................";
                getchar();
                exit(0);
                case 8 :
                //if a new calculation is going on then 8 is an invalid option , else 8 is an option to start a new calculation
                if (flag==new_cal)
                {
                    cout<<"\nInvalid choice : ";
                    cout<<"\nPress any key to continue......................";
                    getchar();

                }
                else{
                    temp = 0;
                    flag = new_cal;

                }
                break;
                default:
                cout<<"\nInvalid Choice : ";
                cout<<"\nPress any key to continue..........................";
                getchar();
                break;
                } 


               
            }while (choice2 != 6);
                break;
    case 2 :
    //loop to display scientific calculator menu
    do
    {
        
       cout<<"==============Scientific Calculator===================";
       cout<<"\n1\tSquare\n2\tCube\n3\tPower\n4\tFactorial\n5\tSin\n6\tCos\n7\tTan\n8\tReturn to previous Menu\n9\tQuit ";
       if (flag == old_cal)
       {
        cout<<"\n10\tClear Memory";
        cout<<"\nChoose the type of Calculation : ";
        cin>>choice2;
       }
       switch(choice2){
        case 1:
        if (flag == new_cal)
        {
            cout<<"Enter number to find Square : ";
            cin>>num1;

        }
        else{
            num1 = temp;
            cout<<"\nNumber is "<<num1<<endl;

        }
      num3 =scien_calc :: square(num1);
      cout<<"\nSquare of "<<num1<<" is "<<num3;
      cout<<"\nPress any key to continue.......................";
      getchar();
      temp = num3;
      flag = old_cal;
      break;
      case 2:
        if (flag == new_cal)
        {
            cout<<"Enter number to find Cube : ";
            cin>>num1;

        }
        else{
            num1 = temp;
            cout<<"\nNumber is "<<num1<<endl;

        }
      num3 =scien_calc :: cube(num1);
      cout<<"\nCube of "<<num1<<" is "<<num3;
      cout<<"\nPress any key to continue.......................";
      getchar();
      temp = num3;
      flag = old_cal;
      break;
      case 3:
      if (flag == new_cal)
        {
            cout<<"Enter first number for base to find power : ";
            cin>>num1;

        }
        else{
            num1 = temp;
            cout<<"\nFirst Number is "<<num1<<endl;

        }
        cout<<"Enter second number for power to find power : ";
            cin>>num2;
      num3 =scien_calc :: power(num1,num2);
      cout<<"\n "<<num1<<"to the power"<<num2<<" is "<<num3;
      cout<<"\nPress any key to continue.......................";
      getchar();
      temp = num3;
      flag = old_cal;
      break;
      case 4:
        if (flag == new_cal)
        {
            cout<<"Enter number to find factorial : ";
            cin>>num1;

        }
        else{
            num1 = temp;
            cout<<"\nNumber to find factorial is "<<num1<<endl;

        }
      long int num3 =scien_calc :: fact(num1);
      cout<<"\nfactorial of "<<num1<<" is "<<num3;
      cout<<"\nPress any key to continue.......................";
      getchar();
      temp = num3;
      flag = old_cal;
      break;
      case 5:
        if (flag == new_cal)
        {
            cout<<"Enter number to find Sin value : ";
            cin>>num1;

        }
        else{
            num1 = temp;
            cout<<"\nNumber for Sin value is "<<num1<<endl;

        }
      num3 =scien_calc :: sin_func(num1);
      cout<<"\nsin value of "<<num1<<" is "<<num3;
      cout<<"\nPress any key to continue.......................";
      getchar();
      temp = num3;
      flag = old_cal;
      break;
      case 6:
        if (flag == new_cal)
        {
            cout<<"Enter number to find cos value : ";
            cin>>num1;

        }
        else{
            num1 = temp;
            cout<<"\nNumber for cos value is "<<num1<<endl;

        }
      num3 =scien_calc :: cos_func(num1);
      cout<<"\ncos value of "<<num1<<" is "<<num3;
      cout<<"\nPress any key to continue.......................";
      getchar();
      temp = num3;
      flag = old_cal;
      break;
      case 7:
        if (flag == new_cal)
        {
            cout<<"Enter number to find tan value : ";
            cin>>num1;

        }
        else{
            num1 = temp;
            cout<<"\nNumber for tan value is "<<num1<<endl;

        }
      num3 =scien_calc :: tan_func(num1);
      cout<<"\ntan value of "<<num1<<" is "<<num3;
      cout<<"\nPress any key to continue.......................";
      getchar();
      temp = num3;
      flag = old_cal;
      break;
      case 8:
      cout<<"\nReturning to previous menu : ";
      cout<<"\nPress any key to continue...................";
      getchar();
      break;
      case 9:
      cout<<"\nQuitting........................................";
      cout<<"\nPress any key to continue.........................";
      getchar();
      exit(0);
      case 10;
      if (flag==new_cal)
      {
        cout<<"\nInvalid choice : ";
        cout<<"\nPress any key to continue...................";
        getchar();

      }
      else{
        temp  = 0;
        flag = new_cal;
      }
      break;
      default:
      cout<<"\nInvalid choice:";
      cout<<"\npress any key to continue............................";
      getchar();
      break;
      }
    } while (choice2!=8);
    break;
    case 3:
    cout<<"\nQuitting..............................";
    cout<<"\nPress any key to continue.........................";
    getchar();
    break;
    default :
    cout<<"\nInvalid choice:";
      cout<<"\npress any key to continue............................";
      getchar();
      break;
    
    }
    }while(choice1!=3);
    return 0;
}