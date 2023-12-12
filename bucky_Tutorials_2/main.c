//
//  main.c
//  BostonTutorials_part2
//
//  Created by Pablo  Demederos on 03/12/23.
//

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#include <time.h>

int main(int argc, const char * argv[]) {
    /*
     Making a Table
     */
    int columns;
    int rows;
    
    for (rows=1; rows<=6;rows++){
        for(columns=1;columns<=4;columns++){
            printf("%d ",columns);
        }
        printf("\n");
    }
    /*
     BREAK A LOOP - breaking a for loop ahead of time
     
     int a;
     int howMany;
     int maxAmount=10;
     printf("How many time you want this loop to run? (Up to 10)\n");
     scanf(" %d", &howMany);
     printf("Here is your count\n");
     for(a=1;a<=maxAmount;a++){
     printf("%d\n",a);
     if(a==howMany){
     break;
     }
     }
     */
    
    
    
    
    /*
     CONTINUE - Keyword for Loops
     */
    printf("Continue in Loops\n");
    int num=1;
    
    do{
        if(num==6 || num==8){ //Checks for the number 6 and 8, and skips them with continue, starts the loop from the next number
            num++;
            continue; //Means hop back to the top of the do loop
        }
        printf(" %d is available\n",num);
        num++;
    } while (num<=10);
    
    /*
     SWITCH STATEMENT
     */
    printf("\nSwitch Statement Excercise\n");
    char grade='B';
    
    switch (grade) {
        case 'A': printf("Sweet!\n"); // if grade is A do this
            break; //Breaks makes the program exit and not test the rest of the letters
        case 'B': printf("Try Harder\n"); // if grade is B do this
            break;
        case 'C': printf("You didn't study much\n");// if grade is C do this
            break;
        case 'D': printf("You love the D\n");// if grade is D do this
            break;
        case 'F': printf("You are dumb\n");// if grade is F do this
            
        default: printf("That doesn´t make sense\n"); // if grade doesnt match any of the cases, do this
            break;
    }
    
    /*
     A FEW COOL CHARACTER FUNCTIONS
     
     1. if(isalpha(variable)) -> Test if the variable is a letter
     2. if(isdigit(variable)) -> Test if the variable is a number
     3. if(isupper)-> Test if the character is Upper Case, else it is lower case
     */
    printf("\nCharacter functions\n");
    int tuna = '/';
    
    if(isalpha(tuna)){
        printf("%c is a letter\n",tuna);
    }else{
        if(isdigit(tuna)){
            printf("%c is a number\n",tuna);
        }else{
            printf("WTF is that?\n");
        }
    }
    //PASSWORD CHALLENGE
    //My attempted answer. PASSWORD CHALLENGE
/*
    printf("Challenge Password\n");
    char myPassword[50];
    int i=0; //Contador para extraer cada caracter de la contraseña
    int hasUpper=0;
    int hasLower=0;
    int hasDigit=0;
    int hasSymbol=0;
    int minLength=8;
    
    printf("Enter your password\n");
    scanf("%s",myPassword);
   

    while(hasUpper==0||hasLower==0||hasDigit==0||hasSymbol==0){
        while(strlen(myPassword)<minLength){
            printf("Your password has to have at least 8 characters\n");
            printf("Enter your password\n");
            scanf("%s",myPassword);
        }
        int long pwdLength=strlen(myPassword);
        
        for(i=0;i<pwdLength;i++){
            if(isalpha(myPassword[i])){
                if(isupper(myPassword[i])){
                    hasUpper++;
                }else{
                    hasLower++;
                }
            }else{
                if(isdigit(myPassword[i])){
                    hasDigit++;
                }else{
                    hasSymbol++;
                }
            }
        }
        if(hasUpper!=0 && hasLower!=0 && hasDigit!=0 && hasSymbol!=0){
            printf("Your password is set\n");
        }else{
            printf("You need to have a symbol a number and an upper case charater\n");
            printf("Enter your password\n");
            scanf("%s",myPassword);
        }
    }
*/
 
/*
 strcat & strcpy
 Take a lower case and make it upper case
 */
    char a = 'a';
    char b = 'F';

    
    printf("%c \n", toupper(a));
    printf("%c \n", toupper(b));
    printf("%c \n", tolower(b));
    
    char ham[100] ="Hey ";
    strcat(ham, "Pablo\n");//Esto le agregó Pablo al string de Hey anterior
    printf(" %s\n", ham);
    
    strcpy(ham,"Pablo is cool\n");//Replaces one string with another
    printf(" %s\n",ham);
/*
 Puts and Gits
 Printing strings and getting strings from the user
 scanf does not take spaces
 */
    /*
    char catsName[25];
    char catsFood[25];
    char sentence[75]="";
    
    puts("What is the cats name?");//It adds a new line automaticly
    fgets(catsName,25,stdin);//Saves it in the variable char catsName
   
    puts("What does the cat eat?");
    fgets(catsFood,50,stdin);
    
    strcat(sentence, catsName);
    strcat(sentence, " loves to eat ");
    strcat(sentence, catsFood);
    puts(sentence);
    */

/*
 Floor to round numbers down
 Ceil to round numbers up
 */
    
    float bacon1 = 9.34567;
    float bacon2 = 3.3;
    
    printf("bacon 1 is %.2f\n",floor(bacon1));
    printf("bacon 2 is %.2f\n",floor(bacon2));
    
    printf("bacon 1 is %.2f\n",ceil(bacon1));
    printf("bacon 2 is %.2f\n",ceil(bacon2));
    
/*
 Absolute values
 abs
 pow() function power
 sqrt() Square root function
 */
    
    int year1 = 1996;
    int year2 = 2023;
    int finalAge;
    
    finalAge=year1-year2;
    printf(" %d\n",finalAge);
    finalAge =abs(finalAge);
    printf(" %d\n",finalAge);
    
    int num1 =5;
    int num2 =3;
    printf("%d to the %d power =%.2f\n",num1,num2,pow(num1, num2));
    //This gives out num1 to the num2 power (5 to the 3rd power here)
    printf("The squared root of %d = %.5f\n",num1,sqrt(num1));
    //This gives out the squared root of num1
/*
 RANDOM NUMBER GENERATOR
 */
    int iCounter;
    int diceRoll;
    srand((unsigned)time(0));
    for(iCounter=0;iCounter<10;iCounter++){
        diceRoll=(rand()%6)+1;//Module makes the remainder less than 6, so we add 1
        printf("%d \n",diceRoll);
    }
/*
 CHALLENGE 2 The users rolls three dice, the program prints out the total to them. Then the user gu
 */
/*
    int diceRoll1;
    int diceRoll2;
    int diceRoll3;
    int diceRoll4;
    int rollSum;
    char guess;
    
    diceRoll1=(rand()&6)+1;
    diceRoll2=(rand()%6)+1;
    diceRoll3=rand()%6+1;
    rollSum= diceRoll1+diceRoll2+diceRoll3;
    

    printf("Your first roll was: %d \n" //
           "Your second roll was: %d\n" //
           "Your third roll was: %d\n" //
           "The sum of your roll was: %d\n",diceRoll1,diceRoll2,diceRoll3,rollSum);
    printf("Guess if the next roll is going to be higher(h), lower(l) or the same(s) as the last roll\n");
    scanf(" %s",&guess);
    int again=1;
    diceRoll4=rand()%6+1;
    while(again==1){
        again=0;
        switch (guess) {
            case 'h':
                if(diceRoll4>diceRoll3){
                    printf("You rolled: %d, you guessed it!\n",diceRoll4);
                }else{
                    printf("You rolled: %d, you suck at guessing!\n",diceRoll4);
                }
                break;
            case 'l':
                if(diceRoll4<diceRoll3){
                    printf("You rolled: %d, you guessed it!\n",diceRoll4);
                }else{
                    printf("You rolled: %d, you suck at guessing\n",diceRoll4);
                }
                break;
            case 's':
                if(diceRoll4==diceRoll3){
                    printf("You rolled: %d, you guessed it!\n",diceRoll4);
                }else{
                    printf("You rolled: %d, you suck at guessing\n",diceRoll4);
                }
                break;
            default:
                printf("Enter a valid character\n");
                scanf(" %s",&guess);
                again=1;
                break;
        }
    }
*/
    

    /*
     Int float and arrays
     */

    int i2;
    int meatball[4]={7,9,43,21};//This is an array with 4 elements
    
    for(i2=0;i2<4;i2 ++){
        printf("Element %d: %d\n",i2,meatball[i2]);
    }
    
    
 //Populating an array using a for loop
/*
    int i3;
    int meatball2[5];
    int totalBalls=0;
    
    for(i3=0;i3<5;i3++){
        printf("How many meatballs did you eat on day %d?\n",i3+1);
        scanf(" %d",&meatball2[i3]);
    }
    for(i3=0;i3<5;i3++){
        totalBalls+=meatball2[i3];
    }
    int avgMB = totalBalls/5;
    printf("You ate %d meatballs total and an average of %d meatballs per day\n",totalBalls,avgMB);
 */

/*
 Parallel Arrays
 */
    int i4;
    int players[5] = {58,66,68,71,87};
    int goals[5]= {26,39,25,29,31};//Player 58 scored 26 goals.. and so on
    int gamesPlayed[5]={30,30,28,30,26};
    float ppg[5];
    float bestPPG = 0.0;
    int bestPlayer = 0;
    
    for(i4=0;i4<5;i4++){
        ppg[i4]=(float)goals[i4]/(float)gamesPlayed[i4];//Typecasting to get a float
        printf("%d  \t  %d  \t  %d  \t  %0.2f\n",players[i4],goals[i4],gamesPlayed[i4],ppg[i4]);
        
        if(ppg[i4]>bestPPG){
            bestPPG=ppg[i4];
            bestPlayer=players[i4];
        }
    }
    
    printf("The best player is player %d with an average of %0.1f goals per game\n",bestPlayer,bestPPG);

/*
 Sorting Arrays
 */
    int swapped;
    int i5;
    int unsortedArray[8]= {66,5,4,2,77,22,1,13};
    printf("Original List\n");
    for(i5=0;i5<8;i5++){
        printf("%d \n",unsortedArray[i5]);
    }
    
    while(1){
        swapped=0;
        for(i5=0;i5<8-1;i5++){//the -1 makes it stop at the second to last number...= last comparison
            if(unsortedArray[i5]>unsortedArray[i5+1]){
                int temp = unsortedArray[i5];
                unsortedArray[i5]=unsortedArray[i5+1];
                unsortedArray[i5+1]=temp;
                swapped=1;
            }
        }
        if(swapped==0){
            break;
        }
        printf("Sorted List\n");
            for(i5=0;i5<8;i5++){
                printf("%d \n",unsortedArray[i5]);//The list is sorted here
        }
    }
    /*
     POINTERS
     A pointer is a type of variable that can hold a memory address
     */
    
    int bagel=19;
    printf("%p \n", &bagel);//%p is print the memory address of the variable bagel
    printf("Address \t  Name    \t  Value    \n");
    printf("%p  \t%s  \t  %d  \n",&bagel,"bagel",bagel);
    
    int *pBagel=&bagel; //el asterico indica que es un pointer. Y que esa variable va a guardar un memory addres. Se pone p de pointer y luego el nombre de la variable a la que apunta
    printf("%p  \t%s  \t  %d  \n",pBagel,"bagel",bagel);//Pusimos pBagel en lugar de &Bagel
    printf("%p  \t%s  \t  %p  \n",&pBagel,"pBagel",pBagel);//El addres de el pointer pBagel y lo que guarda es la direccion de memoria de bagel origianl
    
    printf("\n*pBagel: %d\n",*pBagel);//If you add a * before the pointer it Dereferences the pointer.. gives the value of the original variable, in this case Bagel. So *pBagel == bagel;
    
    //Using Pointers with Arrays
    
    int ii;
    int meatBalls[5]={7,9,43,21,3};
    printf("\nElement \t Memory Addres \t Value   \n");
    for(ii=0;ii<5;ii++){
        printf("meatBalls[%d]\t %p \t %d\n",ii,&meatBalls[ii], meatBalls[ii]);
    }
    //Array names are just pointers to the first element
    printf("\nmeatBalls address\t\t %p \n",meatBalls);//For every array, the basic name is just a pointer to the first element in that array
    //Derreference it
    printf("\nmeatBalls value\t\t %d \n",*meatBalls);//Derreferenced the pointer so it gives me meatBalls[1]=7
    printf("\n(meatBalls+2) \t\t %d \n",*(meatBalls+2));//The +2 makes it go to meatBalls[3];
    
    //Why is this useful???
    char movie1[]="The Return of the Jedi";
    //The pointer is a constant so if you try to reasign a value to movie1, there will be an error
    char *movie2="Pablo is cool, i love jamon";//This just saves the memory for movie 2
    puts(movie2);//Prints the above
    movie2= "New title";//So we can reassign the string of movie 2;
    puts(movie2);// Prints the above
/*
 PROBLEMS WITH STRING LENGHTS
 */
    char book[20];
    char * pBook = book;
    
    fgets(pBook,20,stdin);//Take input from the keyboard, if they enter more thatn ethe specified amount, it cuts it;
    puts(pBook);// solo da 20 espacios
    
    return 0;
}
