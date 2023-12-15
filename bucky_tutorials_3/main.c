//
//  main.c
//  Bucky_TutorialsPart3
//
//  Created by Pablo  Demederos on 09/12/23.
//

#include <stdio.h>
#include <stdlib.h>

void printSomething(void); //Declaring the function
void convertToDollars(float euro);

int main(int argc, const char * argv[]) {
    
    //Refresher de usar pointers para tratar strings como variables..
    char * book2= "Titulo 1";
    puts(book2);
    book2="Titulo 2";
    puts(book2);
    book2="Titulo 3";
    puts(book2);
    
/*
 
 Using the HEAP and Malloc
    The heap is free memory we can borrow when we need it and then give it back
    malloc is memory allocation malloc(how much memory do you need)
*/
    
    int * points;
    points = (int *)malloc(5*sizeof(int));// pointer = (cast_type *)malloc(size_type)
    free(points);//Frees the remaining memory
    
    
//Application of the HEAP. More of using the Heap
    
/*
    int i, howMany;
    int total = 0;
    float average =0.0;
    int * pointsArray;//pointer to pointsArray

    printf("How many numbers do you want to average?\n");
    scanf(" %d",&howMany);
    
    pointsArray=(int*)malloc(howMany*sizeof(int));//Create an array that can store as many elements as "How Many".Saves the memory for how many items its going to store
    
    printf("Enter them boss!\n");
    
    for(i=0;i<howMany;i++){
        scanf(" %d", &pointsArray[i]);
        total+=pointsArray[i];
    }
    
    average = (float)total/(float)howMany;
    printf("\n The average is: %0.2f\n",average);
    
    free(pointsArray);
*/
    
/*
 STRUCTURES
 They can store multiple types of variables under the same structure
 struct name{members of the structur}
 you do a header file employeeInfo.h and you include it #include "employeeInfo.h"
 */
    
/*
    struct user{
        int userID;
        char firstName[25];
        char lastName[25];
        int age;
        float weight;
    };
    
    struct user pablo;
    struct user joselo; //for as many people
    
    pablo.userID=1; //DOT Operator, it access it individual members inside the structure
    joselo.userID=2;
    
    
    puts("Enter the first name of user 1");
    fgets(pablo.firstName,25,stdin);
    puts("Enter the first name of user 2");
    fgets(joselo.firstName,25,stdin);
    
    printf("User 1, your ID is:%d\n",pablo.userID);
    printf("User 2, your first name is %s",joselo.firstName);
    
    
    
    
    
    //For two users, it is not worth it... but it is worth it with many elements
*/
    
    /*
     Writing Files in C
     */
    
    
    //sequential access file
    FILE *fPointer;
    // Use w to write, r to read
    fPointer = fopen("/Users/pablodemederos/Documents/Pablo's Main Folder/Boston C Tutorials/bucky_Tutorials_3_v2/findthisfile.txt", "w");//"name of the file,"w" to write

    if (fPointer == NULL) {
        perror("Error opening file");
        return 1; // or handle the error in an appropriate way
    }

    fprintf(fPointer, "This gets printed on findthisfile.txt\n");//fprintf prints into a file
    fclose(fPointer);//You have to close it to release memory

    /*
     READ FILES
     */
    
    FILE *fP;
    fP = fopen("/Users/pablodemederos/Documents/Pablo's Main Folder/Boston C Tutorials/bucky_Tutorials_3_v2/readthisfile.txt","r");//name of the file, "r" to read
    
    //To display the contents
    char singleLine[150];
    
    while(!feof(fP)){ //!feof - file end of file , the ! is not = Keep looping until you get to the end of the file
        fgets(singleLine,150,fP);//This gets line by line from input "fP"
        puts(singleLine);//Prints it line by line
    }
    fclose(fP);//Close the file to release memory
    
    /*
     APPEND FILES
     */

    fPointer = fopen("/Users/pablodemederos/Documents/Pablo's Main Folder/Boston C Tutorials/bucky_Tutorials_3_v2/findthisfile.txt","a");//name of the file, "a" to append. Goes to the end of the file
    fprintf(fPointer, "\nThis was appended\n");//this will get printed at the end of the file
    
    fclose(fPointer);
    
/*
 Random Access File
    
 */
    FILE *fP2;
    fP2 = fopen("/Users/pablodemederos/Documents/Pablo's Main Folder/Boston C Tutorials/bucky_Tutorials_3_v2/makethisfile.txt","w+");//name of the file, "w+" Open for writing, then read it.
    
    fprintf(fP2, "Write this in the file");
    fseek(fP2,6,SEEK_SET);//Goes to the 6th character, SEEK_END goes to the end, you use a negative number
    fprintf(fP2, "that in this file");//and starts overwriting with this string
    
    fclose(fP2);
    
/*
 FUNCTIONS
 */
    // Use void when the function doesn´t give any number or somtheing like that back
    //Functions are declared below the closing bracket of the main function
    // You have to declare the function on top of the main function
    //Calling your function
    printSomething();
    printSomething();
    printSomething();//Use it as many times as you want without writing the same code
    
/*
 
 Global & Local Variables
 
 */
    
    //Global Variable: Declared outside of all functions, any function can use the variable
    //Local Variables: Declared inside a Function, only the function its created inside can use it.
    
/*
 
 Passing Arguments to Functionsb
 
 */
    //At the bottom of the file, we created the following function (Commented)
    
    /*
     void convertToDollars(float euro){
         float usd = euro*1.37;
         printf("%.02f Euros - %0.2f USD\n",euro,usd);
         return;
     }
     */
    float euroPrice1=32.5;//Declaring the Euro variable... you can get this as an input. It is not the same a the argument declared for the function
    convertToDollars(euroPrice1);//Calls the function with the argument of euroPrice1=32.5; so it inputs it into the formula
    float euroPrice2=5.75;
    convertToDollars(euroPrice2);//Calls the function for euroPrice2;
    convertToDollars(1.00);//Calls the function for 1.00

    
/*
 Return Values
*/
    
    
    
    return 0;
}

void printSomething(void){
    printf("\nI am a function that prints stuff \n");
    return; //Im done with the fuction, return to the program
};

void convertToDollars(float euro){
    float usd = euro*1.37;
    printf("\n%.02f Euros - %0.2f USD\n",euro,usd);
    return;
}

