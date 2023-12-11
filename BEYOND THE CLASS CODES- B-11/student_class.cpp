
#include <iostream>
using namespace std;
class StudentId
{
    string name[100];
    // int age[100];
    int attendence[100];
    int rollNumber[100];
    float s1[100],s2[100],s3[100],s4[100],s5[100];


    int counter;

public:
    void initCounter() { counter = 0; };
    
    void setDetails(void);
    void displayDetails(void);
};
void StudentId ::setDetails(void)
{
    cout <<counter + 1 << " enter student name" <<  endl;
    cin >> name[counter];
    
    // cout <<counter + 1 << " enter your age:" <<  endl;
    // cin >> age[counter];
    cout <<counter + 1 << " enter roll number:" <<  endl;
    cin >> rollNumber[counter];
    cout <<counter + 1 << " enter attendence:" <<  endl;
    cin >> attendence[counter];
    cout<< counter +1<< " enter five subjects marks respectively::"<<endl;
    cin>>s1[counter]>>s2[counter]>>s3[counter]>>s4[counter]>>s5[counter];


    
    counter++;
}
void StudentId ::displayDetails(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << name[i] << "'s roll number is:" << rollNumber[i] << "\nand attendence is:" << attendence[i]<< "\n total marks are: " << (s1[i]+s2[i]+s3[i]+s4[i]+s5[i]) << "\npercenatge is:" <<(s1[i]+s2[i]+s3[i]+s4[i]+s5[i])<<endl;
    }
}

int main()
{
 StudentId student;
    student.initCounter();
    // student.setDetails();
    // student.setDetails();
    // student.setDetails();
    // student.setDetails();
    student.setDetails();
    
    student.displayDetails();

    return 0;
}
