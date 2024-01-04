#include <iostream>
#include <string> // Include the necessary header for string
#include <iomanip>
#include <stack>
#include <queue>
#include <map>
#include <list>


using std::string;
using namespace std; //Using map, string and cout

//Creating the Class Node2 (Doubly Linked Lists)

    class Node2{
        public:
            int Value;
            Node2* Next; //Pointer to the next value
            Node2* Previous; //Pointer to the previous value
    };

//Creating the class node (Linked Lists)
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
void printQueue(queue <int> queue);
void printForward(Node2* head2); //Used in doubly linked lists
void printBackward(Node2* tail); //Used in doubly linked lists

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


    //QUEUE DATA STRUCTURE.  FIFO/FCFS
    //FIFO = First In, First Out, FCFS= First come firts served
    //Used for printers, ordered transactions, any real life queue
    //You have to include queue at the top of the program 
    //Funcitons: push, size, front, back 

        queue <int>  myQueue;

        //Adding elements to end of the queue
        myQueue.push(1);
        myQueue.push(2);
        myQueue.push(3);
        myQueue.push(4);


        //Other Functions
        cout<<"Queue size is: "<<myQueue.size()<<endl;
        cout<<"First element is: "<<myQueue.front()<<endl;
        cout<<"Last element is: "<<myQueue.back()<<endl;

        //Printing the Queue
        cout<<"My Queue: "<<endl;
        printQueue(myQueue);

        //Removing elements from the front of the queue
        myQueue.pop(); 
        cout<<"We removed the first element that came in (1)"<<endl;
        printQueue(myQueue);

    //MAP DATA STRUCTURE IN C++  / Dictionary in other languages
    //Key Value Pairs of Data
    //Associate  A Key with a Value/Values .  A key is always a simple data type , the value can be a complex data type list/array of values
    //You have to include map at the top of the program 
    //Use unique keys
    //A Map orders keys by ascending order (a,b,c   1,2,3)
    //To have an unorderd map you use #include <unordered_map> and the type is unordered_map. Elements appear as you input them

        map <string, string>  myDictionary;//map <key type, value type> nameOfMap 

        //Insert elements in the dictionary

        myDictionary.insert(pair<string,string>("apple","manzana"));//pair<data type,data type>("key","related value");
        myDictionary.insert(pair<string,string>("banana","platano, banana"));//relacionando key banana con dos valores platano y banana en un mismo string
        myDictionary.insert(pair<string,string>("orange","naranja"));
        myDictionary.insert(pair<string,string>("avocado","aguacate"));//lo va poner como 2do por orden alfabeticos
        
        //Printing the dictionary

        for (auto pair : myDictionary) //For every pair in my dictionary ( g++ -std=c++11 main.cpp -o exec to compile with auto)
        {
            cout<<pair.first<<" - "<<pair.second<<endl; //Printing the first part (key) and the second part whichi is the value
        }

        //Access specific elements
        
        myDictionary["orange"]="Naranja";//mapName["specific key"] = "Value"
        for (auto pair : myDictionary) //Refleja el cambio a mayuscula de "Naranja"
        {
            cout<<pair.first<<" - "<<pair.second<<endl; 
        }
        cout<<"Printing specificaly: "<<endl;
        cout<<myDictionary["orange"]<<endl;

        //Size of collection
        cout<<myDictionary.size()<<endl;

        //Delete all elements
        myDictionary.clear();
        cout<<myDictionary.size()<<endl;

        //Pairing Keys with Comples Values
        //Pokedex: Keys- Name of Pokemon, Values - List of Attacks
        //Included <list>

        //Relating a string with a list of string
        map <string,list<string>>  pokedex;
        //Creating a list of strings

        list<string> pikachuAttacks{"thunder shock","tail whip","quick attack"};
        list<string> charmanderAttacks{"fire ball","scary face"};
        list<string> squirtleAttacks{"water ball","squirt"};

        pokedex.insert(pair<string,list<string>>("Pikachu",pikachuAttacks));
        pokedex.insert(pair<string,list<string>>("Charmander",charmanderAttacks));
        pokedex.insert(pair<string,list<string>>("Squirtle",squirtleAttacks));
        
        //Since it is a list we need a nested for loop to iterate through the list

        for (auto pair : pokedex) 
        {
            cout<<pair.first<<" - ";
            for (auto attack: pair.second)
            {
                cout<<attack<<", "; 
            }
            cout<<endl;  
        }
    
    
    //Doubly Linked Lists 
    //A doubly linked list has a node with a value, a pointer to the next node and a pointer to the previous node
    //Uses more memory
    

        //Creating the first node

        Node2* head2; //using head 2 just because head was already created for the single linked list
        Node2* tail;

        Node2* node = new Node2(); //Creating a node pointer called "node" of class Node2 and allocating memory
        node->Value=4; //Setting the value for the node
        node->Next=nullptr; 
        node->Previous=nullptr; //Since there is no other node it is the first and last node... points to NULL in both ways
        head2=node;
        tail=node;

        //Adding the second node to the list
        node = new Node2(); //Allocate space for a new node, we use the same varialbe because we have added the first node to the list and we dont need it to point there any longer
        node->Value=5;
        node->Next=nullptr;// Since this is the last created node it points to the null pointer
        node->Previous=tail; //Pointing to the previous tail
        tail->Next=node; //Previous tail now has to point to the new node
        tail=node;//Make the node the new tail

        //To add futher nodes.. you can copy the code for the second node and just change the values
        node = new Node2(); 
        node->Value=6;
        node->Next=nullptr;
        node->Previous=tail; 
        tail->Next=node; 
        tail=node;

        //Traversing the list to print elements
        cout<<"Printing forward"<<endl;
        printForward(head2);
        cout<<"Printing backward"<<endl;
        printBackward(tail);

    //TREE DATA STRUCTURE










        

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
void printQueue(queue <int> queue){
    while(!queue.empty()){
        cout<<queue.front()<<endl;
        queue.pop();
    }
    cout<<endl;    
}
void printForward(Node2* head2){
    Node2* traverser=head2; //It will go from node to node and print the value of the current node
    while (traverser!=nullptr)
    {
        cout<<traverser->Value<<endl;
        traverser=traverser->Next;
    }
}
void printBackward(Node2* tail){
    Node2* traverser=tail; //It will go from node to node and print the value of the current node
    while (traverser!=nullptr)
    {
        cout<<traverser->Value<<endl;
        traverser=traverser->Previous;
    }
}

