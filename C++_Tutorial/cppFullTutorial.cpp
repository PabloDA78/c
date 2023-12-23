#include <iostream>
#include <string> // Include the necessary header for string
#include <iomanip>

using std::string;
using namespace std;

int main(){
    //Print
    std::cout<<"Hello World 2"<<std::endl; // This will output, print Hello World 2
    //To get rid of the std every time you put using namespace std;
    cout<<"Hello World 2"<<endl; //Now you dont have to use the std s 

    //Variables & Data Types
    float annualSalary = 15.4;
    float monthlySalary = annualSalary/12;
    cout<<setprecision(3)<<monthlySalary<<endl; //Include the iomanip library and set precision //Not usind the std::
    printf("%0.2f\n",monthlySalary);//You can use regular C code for this
    cout<<"In 10 years you will earn: $"<<annualSalary*10<<endl; //You can do the operation directly here

    //Taking input from the User
    /*
    float userSalary;
    cout<<"What is your annual salary"<<endl;
    cin>>userSalary; //notice the arrows are the other way around
    monthlySalary=userSalary/12;
    cout<<"Your monthly salary is: "<<fixed<<setprecision(2)<<monthlySalary<<endl; //Fixed to correct notation.
    */

    //Character variables
    char character = 'a';
    //String Variable
    string storyOne = "I was blown away";
    //Integer Variable
    int numberOfDays=5;
    //Bool - True or False
    bool isOlderThan18 = true;
    //Float Decimal point numbers 
    float averageGrade= 2.33;
    //Double - Double size a float - Takes 8bytes, used for larger numbers
    double currentyBalance = 125677654555.234;

    //Sizes of data types
    cout<<"Size of int is: "<<sizeof(int)<<" bytes"<<endl;
    cout<<"Size of char is: "<<sizeof(char)<<" bytes"<<endl;
    cout<<"Size of bool is: "<<sizeof(bool)<<" bytes"<<endl;
    cout<<"Size of float is: "<<sizeof(float)<<" bytes"<<endl;
    cout<<"Size of double is: "<<sizeof(double)<<" bytes"<<endl;

    //Data Type Overflow
    int intMax = INT_MAX;
    cout<<intMax<<endl;
    //cout<<intMax+1<<endl; Este se va al primer numero (-2147483648 , que es INT_MIN como un reloj)

    //ASCII American Standard Code for Information Interchange
    //ASCII Table
    cout<<(int)'a'<<endl; //Typecasting the char data type to int data type
    cout<<int('A')<<endl;//Other way of doing it
    cout<<char(65)<<endl;//Doing it the other way around. This is usefull to cyber

    //Cyphring Words
    char c1='P',c2='a',c3='b',c4='l',c5='o';
    //If we want the user to enter them
    //cin>>c1>>c2>>c3>>c4>>c5;
    cout<<c1<<c2<<c3<<c4<<c5<<endl;
    //in ascii
    cout<<"ASCII Message: "<<int(c1)<<" "<<int(c2)<<" "<<int(c3)<<" "<<int(c4)<<" "<<int(c5)<<endl;
    




}