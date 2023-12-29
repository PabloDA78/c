#include <iostream>
#include <string> // Include the necessary header for string
#include <iomanip>

using std::string;
using namespace std;


//Creating the class node
        class Node{
        public:
            int Value;//Value of the node
            Node* Next;//Pointer to the next value
        };
//Printing the first Linked List
void printList(Node* n);

int main(){
    
    //A Data structure is an organized collection of data of any kind


    /* //WORKING WITH ARRAYS
        int size; //User defines the amount of elements in the array
        cout<<"How many months do you want to enter? "<<endl;
        cin>>size;
        float *monthsArray=new float[size]; //{100,220,300,0,200,250}; //Monthly savings amount
        float total=0;
        //Populating the array
        //Calculating the sum of the array

        for (int i = 0; i < size; i++)
        {
            cout<<"Enter the amount saved during month "<<i+1<<":"<<endl;
            cin>>monthsArray[i];
            total+=monthsArray[i];
        }
        delete [] monthsArray;
        monthsArray=NULL;

        float average=total/size;
        float inTwoYears=average*24;

        //Outputs

        cout<<"Total is: "<<total<<endl;
        cout<<"Average is: "<<fixed<<setprecision(2)<<average<<endl;
        cout<<"In 2 Years is: "<<fixed<<setprecision(2)<<inTwoYears<<endl; */
    
    //LINKED LISTS
    //Non continuous collection, it stores data in random positions. They dont have fixed size; Dynamic Size.. they need more memory
    //The first element is known as head, it stores its value and a pointer to the next element in the list
    //The second element stores its value and a pointer to the next element and so on...
    //The last element has its value and the value NULL because there are no more elements to point to
    //You can´t access an element directly because you dont know where it is in the memory
    //In order to represent an element in a liked list you have to create a user define data type (Class) - Top of the code
    //We use the name "node" for elements in a liked list.


        //Create 3 elements
        Node* head=new Node();// Created a node type pointer named head and allocated the memory space to the head node
        Node* second=new Node();//Second element
        Node* third=new Node();//Third element
        //Assign value to the elements and the pointer to the next element
        head->Value=1; //The head node will have a value of 1 
        second->Value=2;
        third->Value=3;

        //Pointers to the next element in the list
        head->Next=second; //The head node will point to the second node
        second->Next=third;
        third->Next=NULL;//No more elements to point to

        //Access the elements of the list
        //Creating a function - printList
        printList(head);



        


}

void printList(Node* n){
    while (n!=NULL){
        cout<<n->Value<<endl;//Print the value of the current node
        n=n->Next;//Move to the next element in the list
    }
    
}