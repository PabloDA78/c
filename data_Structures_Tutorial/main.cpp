#include <iostream>
#include <string> // Include the necessary header for string
#include <iomanip>
#include <stack>

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
//Insert an element at the front of a Linked List
void insertAtTheFront(Node** head,int newValue);
void insertAtTheEnd(Node** head,int newValue);
void insertAfter(Node*previous, int newValue);
void printStackElements(stack <int> stack);

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

        //Adding elements to linked lists
        insertAtTheFront(&head,0);//Pass the address of the head (&head) and the value that i want to insert at the top of my list (0)
        cout<<endl;
        printList(head);
        
        //Adding elements at the end of a linked list
        insertAtTheEnd(&head,4);//Pass the address of the head (&head) and the value that i want to insert at the end of my list (4)
        cout<<endl;
        printList(head);
        
        //Add elements after an specific node
        insertAfter(second,10);//Pass the specific node (second) and the value that i want to insert after second (10)
        cout<<endl;
        printList(head);

    //STL STACK LIFO -- Stack Data Structures
    //Stack is a data collection which uses LIFO technique. LIFO = Last In, First Out or FILO = First In, Last Out
    //Useful in featrues las "Undo /Command Z" where the last thing you did, is the first thing it undoes
    //Functions - Empty, Size, Top, Push, Pop
    //You have to include stack at the top of the program 
        
        stack <int> numbersStack;//Stack of integers  of name "numbersStack"
        if(numbersStack.empty()){//Is the numbersStack empty?
            cout<<"Stack is empty"<<endl;
        } else{
            cout<<"Stack is not empty"<<endl;
        }
        cout<<"Stack size is: "<<numbersStack.size()<<endl;
        
        //Adding elements to the stack

        numbersStack.push(1);//Added 1 to the top of the stack
        if(numbersStack.empty()){//Is the numbersStack empty?
            cout<<"Stack is empty"<<endl;
        } else{
            cout<<"Stack is not empty"<<endl;
            cout<<"The top element is: "<<numbersStack.top()<<endl;
        }
        cout<<"Stack size is: "<<numbersStack.size()<<endl;
        //Adding more elements
        numbersStack.push(2);
        numbersStack.push(3);
        cout<<"We added two more. Stack size is: "<<numbersStack.size()<<endl;
        cout<<"The top element is: "<<numbersStack.top()<<endl;
        //Removing elements from the stack
        numbersStack.pop();
        cout<<"We removed one element. Stack size is: "<<numbersStack.size()<<endl;
        cout<<"The top element is: "<<numbersStack.top()<<endl;
        //Printing elements from the stack
        //Adding more elements
        numbersStack.push(3);
        numbersStack.push(4);
        numbersStack.push(5);
        cout<<"Adding 5 elements (1,2,3,4,5), and printing them out"<<endl;
        printStackElements(numbersStack);//calling the printing frunction




}

void printList(Node* n){
    while (n!=NULL){
        cout<<n->Value<<endl;//Print the value of the current node
        n=n->Next;//Move to the next element in the list
    }
    
}
void insertAtTheFront(Node** head,int newValue){ //Recieves the address of a pointer (**) and the newValue
    //Prepare a newNode
    Node* newNode = new Node();
    newNode->Value =newValue;
    //Put it in front of the current head
    newNode->Next=*head;
    //Move the head of the list to point to newNode
    *head=newNode;
}
void insertAtTheEnd(Node** head,int newValue){
    //Prepare newNode
    Node* newNode = new Node();
    newNode->Value = newValue;
    newNode->Next = NULL;
    //If linkedlist is empty, newNode is the head
    if (*head==NULL)
    {
        *head=newNode;
        return;
    }
    //Find the last node
    Node* last= *head;
    while (last->Next!=NULL)
    {
        last=last->Next;
    }
    //Insert newNode after the last node (at the end)
    last->Next=newNode;
}
void insertAfter(Node*previous, int newValue){
    //Check if the previous node is NULL
    if (previous==NULL)
    {
        cout<<"Previous cannot be NULL"<<endl;
        return;
    }
    //Prepare a new Node
    Node* newNode = new Node();
    newNode->Value=newValue;
    //Insert newNode after the previous
    newNode->Next=previous->Next;
    previous->Next=newNode;

    }
void printStackElements(stack <int> stack){
    while(!stack.empty()){ //while stack is not empty (!)
        cout<<stack.top()<<endl;
        stack.pop();
    }
}



