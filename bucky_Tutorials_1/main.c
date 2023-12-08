//
//  main.c
//  C_Programming_tutorials
//  Created by Pablo  Demederos on 30/11/23.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// #include "pablosInfoBostonTutorial.h" //Goes look for the header program and "copy pastes" it in this file

#define MYNAME "Pablito" //Defining contants... use CAPITAL LETTERS  to distinguish from variables

int main(int argc, const char * argv[]) {
    // Print f, and Conversion Characters
    //printf("My nickname is %s, my age is %d and my sister is %s \n",MYNAME,MYAGE,SISTERNAME);
    //Calls the constant at the top of the file, and the constants in the pablosInfoBostonTutorial file
    printf("Hello, Pablo\n");
    printf("%s is %s\n","Pablo", "nice");//%s are place holders for strings
    printf("I ate %d hotdogs\n", 9 );//%d is for integers, with the number we dont use " ", that is for char
    printf("%f is the number pi\n", 3.141592 );//%f is for float, numbers with decimals
    printf("%.2f is the number pi\n", 3.141592 );//%.2f will only show two decimals
    /*
     Variables
     - dont start with a number or underscore. Start with a letter
     - no spaces
     - no symbols except underscore
     - dont name it as a function (main, printf  etc)
     */
    int age; //Define the variable, int is for integer numbers
    int currentYear=2023;
    int birthYear=1996;
    age = 27; //Give the variable a value
    printf("Pablo is %d years old \n",age); //Call the variable
    age = currentYear-birthYear;// You can do operations within this
    printf("Pablo is %d years old \n",age); //Call the variable
    /*
     Arrays
     */
    char name[16] = "Pablo Demederos"; //Defining the array
    printf("My name is %s \n",name);
    
    name [2]= 'v'; //Will get the 2nd element in the array "name" in change it to 'e'NOTE: Count starts in zero
    printf("My name is %s \n",name); //Returns "My name is Pav lo Demederos
    
    char food[]="tacos"; //Automaticaly sets the size to 5 (4 letters plus the string terminator)
    printf("My favorite food is %s \n",food);
    strcpy(food,"bacon"); //Overwrites the food array
    printf("My favorite food is %s \n",food);
    /*
     Getting Input
     */
    /*
     char firstName[20];
     char crush[20];
     int numberOfBabies;
     printf("What is your name?\n");
     scanf(" %s",firstName);//Allows the user to input a string that will be saved on firstName variable
     //ALWAYS USE A SPACE " %s"
     printf("What is your crush's name?\n");
     scanf(" %s",crush);//Allows the user to input a string that will be saved on crush variable
     
     printf("How many kids will you have?\n");
     scanf(" %d",&numberOfBabies);//Use the & before every variable except for Arrays, float, char, integers
     
     printf(" %s and %s are in love and will have %d babies\n",firstName,crush,numberOfBabies); //prints using the varialbes from the users input
     */
    
    /*
     Mathematical Operators
     */
    
    int weight = 75;
    printf("If I eat a watermelon I will weigh %d kg\n",weight+1);//Add to the original variable
    printf("If I poop a watermelon I will weigh %d kg\n",weight-1);//Subtract to the original variable
    printf("If I eat a ton of watermelon I will weigh %d kg\n",weight*2);//multiply to the original variable
    printf("If I poop a ton of watermelon I will weigh %d kg\n",weight/2);//divide to the original variable
    printf("If I eat a watermelon I will weigh %d kg\n",weight%7);//Module, the remainder of the division
    
    /*
     Order of operations
     */
    int orderMath=4+2*6;
    printf("Result: %d\n",orderMath); //First multiply, they add...just like in normal math
    orderMath =(4+2)*6;
    printf("Result: %d\n",orderMath);//Use parenthesisi like in normal math
    
    /*
     Assign a value to multiple variables
     */
    int var1,var2,var3;
    var1=var2=var3=100;
    printf("%d,%d,%d\n",var1,var2,var3);//Prints 100,100,100;
    /*
     Calculating Average Age
     */
    float age1,age2,age3,averageAge;
    age1=age2=4;
    age3=12;
    averageAge=(age1+age2+age3)/3;
    printf("The average age is %.1f years old\n",averageAge);//Gives out the average age, the .1 is to limit it to one decimal
    /*
     Calculating Interest
     */
    int pageViews=0;
    
    pageViews=pageViews+1;//The new value is the old value plus 1
    
    printf("Page views: %d\n",pageViews);
    pageViews=pageViews+1;//The new value is the old value plus 1
    printf("Page views: %d\n",pageViews);
    pageViews=pageViews+1;//The new value is the old value plus 1
    printf("Page views: %d\n",pageViews);
    //There is an easier way
    
    float balance=1000.00;
    
    balance *= 1.1; //Shorthand way to write balance = balance*1.1
    printf("Balance is %.2f\n",balance);
    balance *= 1.1; //Shorthand way to write balance = balance*1.1
    printf("Balance is %.2f\n",balance);
    balance *= 1.1; //Shorthand way to write balance = balance*1.1
    printf("Balance is %.2f\n",balance);
    /*
     Typecasting
     Temporary changing the type of variable (int, float, char)
     */
    float avgProfit;
    int priceOfPumpkin=10;
    int sales=59;
    int daysWorked=7;
    
    avgProfit=((float)priceOfPumpkin*sales)/(float)daysWorked; //Temporarily changing to float so we get the correct float result
    printf("The average profit per day is %.2f\n",avgProfit);
    /*
     IF STATEMENTS
     */
    if(4<10){
        printf("Yes, 4 is less than 10\n"); //It runs because 4 is less than 10
    }
    /*
     < less than
     > greater than
     <=, >= less than or equal, greater than or equal
     == Equal, we use double equal, because one = assigns values
     != not equals to
     */
    int currentAge=17;
    if (currentAge>=18){
        printf("You can enter the site\n");
    }
    if(currentAge<18){
        printf("You may not enter the site\n");
    }
    //The code that runs is the one that has the true condition
    /*
     Nesting IF STATEMENTS
     Puting one IF inside another
     */
    char gender='m';
    if(currentAge<18){
        printf("You may not enter the site, ");
        if(gender=='m'){
            printf("go play somewhere else\n");
        }
    }
    /*
     IF ELSE STATEMENTS
     */
    float cashBalance=1;
    if(cashBalance==0){
        printf("You need to get some money\n");
    }
    else{
        printf("You're good to go\n");
    }
    //You can nest Ifs and ElseIfs if the decision tree is more complex
    float grade1= 5, grade2=3.7, grade3=1;
    float avgGrade = (grade1+grade2+grade3)/3;
    if(avgGrade>=8){
        printf("Your average is %0.2f and you have an A\n",avgGrade);
    }else if (avgGrade>=6){
        printf("Your average is %0.2f and you have a B\n",avgGrade);
    }else {
        printf("Your average is %0.2f and you have an F\n",avgGrade);
    }
    /*
     Testing two statements together AND
     For and statements we use the double && symbol
     */
    int hoursStudied =10;// 10 or more
    int kidsBeatUp =1;// 0 kids
    
    if(hoursStudied>=10 && kidsBeatUp==0){
        printf("You are a good student\n");
    }
    
    /*
     Testing if one of two statements are true. OR
     For or statemens we use ||
     */
    /*
     
     char answer;
     printf("Do you like bagels (y/n)\n");
     scanf(" %c",&answer);
     if ((answer=='y')||(answer=='n')) {
     printf("Thank you for you answer\n");
     }
     
     */
    
    /*
     Shorthand If Else
     (test)? trueCode : falseCode;
     */
    int testVar1 = 3;
    (testVar1==2)? printf("True\n") : printf("False\n");
    
    int friends=1;
    printf("I have %d friend%c\n",friends,(friends!=1) ? 's':' ');
    
    
    /*
     Increment Operator
     variable++; it increases the value of the variable by 1
     Decrement Operator
     variable--;it decreases the value of the variable by 1
     */
    int tuna=20;
    printf(" %d\n",tuna);
    tuna++;
    printf(" %d\n",tuna);
    tuna--;
    printf(" %d\n",tuna);
    //When doing ecuations, you can put the ++ or -- before doing the equation
    int newTuna = ++tuna *10; //Calculates (20+1)*10
    printf("I added one to tuna and the I made the operation so newTuna = %d\n",newTuna);
    tuna=20;
    newTuna = tuna++ *10; //Calculates 20*10, and then adds 1 to tuna
    printf("The answer here is  %d, after the operation I added 1 to tuna so tuna= %d\n",newTuna, tuna);
    
    /*
     While LOOPS
     while(test){
     code
     }
     */
    int tuna2=1;
    while(tuna2<=5){
        printf("Tuna Count= %d\n",tuna2);//Print if true
        tuna2++;//Adds one to tuna2;
    }
    //Example 2
    int day = 1;
    float amount = 0.1;
    
    while(day<=31){
        printf("Day: %d | Amount: $%0.2f\n",day,amount);
        amount*=2;//Amount = amount*2
        day++;//Adds a day to the day variable
    }
    
    /*
     Do While LOOPS
     do{
     this code;
     } while (test);
     */
    
    /*
    float grade = 0;
    float scoreEntered = 0;
    float numberOfTests = 0;
    float average = 0;
    
    printf("Press 0 when complete\n");
    
    do{
        printf("Tests:%.0f  Average:%0.2f  \n",numberOfTests,average);
        printf("Enter Test Score:");
        scanf(" %f",&scoreEntered);
        grade+= scoreEntered;
        numberOfTests++;
        average=grade/numberOfTests;
    }while(scoreEntered!=0);
    */
    
    
    /*
     For Loops
     }
     */
    int bacon;
    for(bacon=1; bacon<=10; bacon++){ //Begin at one, stop at 10, increment by 1
        printf("Bacon is %d\n",bacon); //Will print bacon is 1 through 10
    }
    //For increments of more than 1
    for(bacon=0; bacon<=10; bacon+=2){ //Begin at one, stop at 10, increment by 2
        printf("Bacon is %d\n",bacon); //Will print bacon is 1 through 10 in increments of 2
    }
    
    return 0;
}

