#include <iostream>
#include <string> // Include the necessary header for string
#include <iomanip>
#include <cstdlib> 
#include <stdlib.h>

using std::string;
using namespace std;
void functionOne();//Declaring the function... prototype it.
void introduceMe(string name, string city, int age=0); //age=0 is for the parameter to have a default, has to be at the end of the list.
bool isPrime(int numberCheck);
void showMenu();
template<typename T>
void mySwap(T& a, T& b);
int recursiveSum(int m , int n);
int recursiveFactorial(int a);

//Link to the video : https://www.youtube.com/watch?v=GQp1zzTwrIg&list=PL43pGnjiVwgTg9IGE0ijSMDxVG66Lhye2&index=1
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
    
    //IF/Else Statements
    //User enters a number(int), we have to say if it is odd or even
    
    /* int oddOrEven;
    cout<<"Enter a number: "<<endl;

    cin>>oddOrEven;
    if (oddOrEven%2==0)
    {
        cout<<"Your choice "<<oddOrEven<<" is even!"<<endl;
    } else{
        cout<<"Your choice "<<oddOrEven<<" is odd!"<<endl;
    }
    */

    //Nested If Statement
    //Check the type of triangle
    //Users enteres the lenghts of the sides sideA,sideB,sideC
    //Program writes if the triangle is equilateral,isoceles or scalene

    
    int sideA=3,sideB=3,sideC=4;
    cout<<"The sides are: "<<sideA<<","<<sideB<<",and "<<sideC<<endl;
    //To get it from user
    // cin>>sideA>>sideB>>sideC;
    if (sideA==sideB && sideB==sideC)
    {
        cout<<"This is an equilateral triangle"<<endl;
    }else if (sideA==sideB || sideB==sideC){
       cout<<"This is an isoceles triangle"<<endl; 
    }else{
        cout<<"This is an scalene triangle"<<endl; 
    }
    

    //OPERATORS
    //Arithmetic +,-,/,*,%
    //Increment ++
    //Decrement --
    //Less than <, Greater than >, Less than or equal to <=, Greater than or equal to >=
    //Equal to ==, Not Equal to !=
    // And &&, Or ||, Not !
    //Operators of asignment: Assign with =, Add and assign +=, Substract and assigne -=, Multiply and assigne *=, Divide and assigne /=
    //Modulate and assign /=
    

    //Swapping the value of two variables

    int varOne=1,varTwo=2;
    cout<<"Var 1 is: "<<varOne<<" and Var 2 is : "<<varTwo<<endl;
    int temp=varOne;
    varOne=varTwo;
    varTwo=temp;
    cout<<"Var 1 is now: "<<varOne<<" and Var 2 is now: "<<varTwo<<endl;
    
    //Ternary Conditional
    //Guessing Game
    
    /* int hostNum,guessNum;
    cout<<"Host: "<<endl;
    cin>>hostNum;
    system("clear");
    cin>>guessNum;
    //Ternary operator
    (hostNum==guessNum)?cout<< "Correct!"<<endl:cout<< "Failed!"<<endl;//Condition ? if true:if false */


    //Switch Statements 
    //Building a calculator

    /* float num1,num2,answer;
    char operation;
    cin>>num1>>operation>>num2;

    switch (operation)
    {
        case '-': cout<<num1<<operation<<num2<<"="<<num1-num2<<endl;break;
        case '+': cout<<num1<<operation<<num2<<"="<<num1+num2<<endl;break;
        case '*': cout<<num1<<operation<<num2<<"="<<num1*num2<<endl;break;
        case '/': cout<<num1<<operation<<num2<<"="<<num1/num2<<endl;break;
        case '%': 
            bool isNum1Int,isNum2Int;
            isNum1Int=((int)num1==num1);
            isNum2Int=((int)num2==num2);
            if(isNum1Int==true && isNum2Int==true){
                cout<<num1<<operation<<num2<<"="<<(int)num1%(int)num2<<endl;break;
            }else{
                cout<<"Syntax Error "<<endl;
            }break;
        default: cout<<"Invalid Entry "<<endl;
    }
    */

    //While loops
    //Write out all the numbers divisible by 3 betwen 100-500
    int counter=100;
    while(counter<=500){
        if(counter%3==0 && counter%5==0){
            cout<<counter<<" ";
        }
        counter++;
    }
    cout<<endl;
       
    //While loops part two: Counting the digits of a number
    int number1=44334;
    if(number1==0){
        cout<<"You entered zero\n" ;
    }else{
        int counter=0;
        while(number1>0){
            number1 /= 10;
            counter++;
        }  
            cout<<"Your digit has: "<<counter<<" digits"<<endl;
    }

    //While Loops part 3
    //Reversing a number
    number1 = 12345678;
    int reverseNumber=0;
    while(number1!=0){
        reverseNumber*=10;
        int lastDigit = number1 % 10;//This returns the last digit
        number1 /=10;
        reverseNumber+=lastDigit;
    }
    cout<<"The reversed number is: "<<reverseNumber<<endl;

    //Do While Loops
    //Validating a Pin Number
    
    int userPin=1234, pin=1234, errorCounter=0;
    do
    {
        cout<<"Enter you pin: "<<endl;
        //cin>>pin;
        if(pin==userPin){
            cout<<"Welcome!"<<endl;
            break;
        }else{
            cout<<"Incorrect pin, you have "<<2-errorCounter<<" more attempt(s)."<<endl;
            errorCounter++;
        }
    } while (errorCounter<3);
    if (errorCounter==3)
    {
        cout<<"Your account has been blocked"<<endl;
    }
    
    //For Loops
    //Calculating the factorial of a number
    number1=6;
    int i;
    int factorial=1;
    for (i = 1; i <= number1; i++)
    {
       factorial*=i;
    }
    cout<<"The factorial is "<<factorial<<endl;

    //Nesting Loops
    //Enter 3 grades between 1 and 5 and return the average grade
/*     i=0;
    int grade;
    float gradeSum=0;
    for (i = 0; i < 3; i++)
    {
        do
        {
            cout<<"Enter grade "<<i+1<<":"<<endl;
            cin>>grade;
        } while (grade<1 || grade>5);
         gradeSum+=grade;
    }
    cout<<"Your GPA is "<<float(gradeSum/3)<<endl;
 */

    //Nested For Loops
    //Multiplication Table

    int j;
    for (i = 1; i <= 10; i++)
    {
        cout<<"Tabla del "<<i<<endl<<endl;
        for (j = 1; j <= 10; j++)
        {
            cout<<i<<"*"<<j<<"="<<i*j<<endl<<endl;
        }  
    }

    //Program for drawing a rectangle
    int height=5,width=5;

    for (i = 0; i < height; i++)
    {
        for (j = 0; j < width; j++)
        {
          cout<<setw(3)<<"+";
        }
        cout<<endl;
    }

    cout<<endl;
    
    //Drawing triangles and inverted triangles
    int lenght=5;
    for (i = 1; i <= lenght; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout<<setw(3)<<"*";
        }
        cout<<endl;
        
    }
    //Inverted Triangles
    //Code Reusability, flipping the code

    cout<<endl;
    lenght=5;
    for (i = lenght; i >= 1; i--)
    {
        for (j = i; j >= 1; j--)
        {
            cout<<setw(3)<<".";
        }
        cout<<endl;
        
    }
    
    //Functions
    functionOne(); //This executes the function declared after the main;


    //Functions with parameters or arguments
    introduceMe("Pablo","Mexio City",44);//You give the parametor asked
    string nameTwo = "Pedro";
    string cityTwo = "Guadalajara";
    introduceMe(nameTwo,cityTwo);

    //Function Return Statement 
    //Program for checking prime numbers
    int numberTwo=887;
    bool isPrimeFlag=isPrime(numberTwo);//Here the program returns the "isPrimeFlag" bool variable and assigns it to the new "isPrimeFlag here"
    if (isPrimeFlag==true){
            cout<<endl<<"Your number is a prime number"<<endl;
        }else{
            cout<<endl<<"Your number is not a prime number"<<endl;
        }

    //Code reusability
    //Checking all the numbers bewteen 1 and 1000
    cout<<"This are prime numbers:"<<endl;
    int counter2=0;
    for (i = 1; i <= 100; i++)
    {
        bool isPrimeFlag=isPrime(i);
        if (isPrimeFlag==true)
        {
            cout<<i<<"  ";
            counter2++; //Counts how many prime numbers are there
        } 
    }
    cout<<endl<<"There are "<<counter2<<" prime numbers"<<endl;

    //Building an ATM App
    //Functionalities: Check balance, deposit, withdraw, show menu

 
/*     int option;
    double balance=500;
    cout<<endl;
    do{
        showMenu();
        cout<<"Please choose an option: ";
        cin>>option;
        system("clear");
        switch (option)
        {
        case 1:
            cout<<"Balance: $"<<fixed<<setprecision(2)<<balance<<endl;
            break;
        case 2:
            cout<<"Deposit amount:";
            double depositAmount;
            cin>>depositAmount;
            balance+=depositAmount;
            break;

        case 3:
            cout<<"Withdraw amount:";
            double withdrawAmount;
            cin>>withdrawAmount;
            if(withdrawAmount<=balance){
                balance-=withdrawAmount;
            }else{
                cout<<"Insufficient Balance"<<endl;
            }
            break;
        default:
            break;
        }
    }while(option!=4);
 */

    //Generic Functions & Templates. Using the same function for various data types, 
    //Since the funtion is generic, it works with int and char the same
    int a1=5,b1=7;
    cout<<a1<<" - "<<b1<<endl;
    mySwap(a1,b1);
    cout<<a1<<" - "<<b1<<endl;
    char char1='c',char2='d';
    cout<<char1<<" - "<<char2<<endl;
    mySwap(char1,char2);
    cout<<char1<<" - "<<char2<<endl;

    //Recursion and Recursive Functions
    //Recursion is a function invokes itself
    //Task: Sum of numbers between m and n

    //Solution with loops

/*     int m=2,n=4;
    int sumOfNumber=0;
    for(i=m;i<=n;i++){
        sumOfNumber+=i;
    }
    cout<<sumOfNumber<<endl; */

    //Using recursion (See function def at the bottom)
    cout<<"Sum is: "<<recursiveSum(2,4)<<endl;
    cout<<"Factorial is: "<<recursiveFactorial(9)<<endl;

    //Introduction to Pointers




    }
            //OUTSIDE OF MAIN
            //Functnions

            void functionOne(){ //return type  name (parameters)
                cout<<"Calling function from function one"<<endl;
            }

            //Functions with parameters, Default parameters
            void introduceMe(string name, string city,int age){ //return type, name (parameter type variable for that parametor) 
            cout<<"My name is "<<name<<", and I am from "<<city<<".";
            if(age!=0){ //If the user doesn´t provide an age, the following will not run.
            cout<<" I am "<<age<<" years old."<<endl;
            }
            }
            //Function Return Statement 
            //Program for checking prime numbers
            bool isPrime(int numberCheck){

                for (int i = 2; i < numberCheck; i++)
                {
                    if(numberCheck%i==0){
                        return false; //This returns breaks the loop
                    }  
                } 
                return true; //If none fulfilled the condition, it moved down to return true
            }   
            void showMenu(){
                cout<<"**********MENU**********"<<endl;
                cout<<"1. Check balance"<<endl;
                cout<<"2. Deposit"<<endl;
                cout<<"3. Withdraw"<<endl;
                cout<<"4. Exit"<<endl;
                cout<<"************************"<<endl;
            }
            template<typename T>//T makes the it a generic function.You have to pass arguments by reference, not value
            void mySwap(T& a, T& b) {
                T temp = a;
                a = b;
                b = temp;
            }
            int recursiveSum(int m,int n){
                if(m == n)//Base case to stop from an infinite recursion
                    return m;
                return m + recursiveSum(m+1,n);
            }
            int recursiveFactorial(int a){
                int b=1;
                if(a==b)
                    return a;
                return a * recursiveFactorial(a-1);
            }
    