#include <iostream>
#include <string> // Include the necessary header for string
#include <iomanip>
#include <stack>
#include <queue>
#include <map>
#include <list>
#include <vector>


using std::string;
using namespace std; //Using map, string and cout
//Creating a structure node for a binary tree
struct Node3{
    int data; //Value of the node
    Node3* left; //Pointer to the left child
    Node3* right; //Pointer to the right child
};
Node3* createNode(int data); //Prototyping the function to create a node
//Creating the Class Node2 (Doubly Linked Lists)
void printTree(Node3* root);//Preorder function to print the tree
void inorderTree(Node3* root);//Inorder function to print the tree
void postOrderTree(Node3* root);//Postorder function to print the tree
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
//Insert an element at the end of a Linked List
void insertAtTheEnd(Node** head,int newValue);
//Insert an element after a specific node of a Linked List
void insertAfter(Node*previous, int newValue);
//Printing in Stack
void printStackElements(stack <int> stack);
//Printing in Queue
void printQueue(queue <int> queue);
//Doubly Linked Lists
void printForward(Node2* head2); //Used in doubly linked lists
void printBackward(Node2* tail); //Used in doubly linked lists

class Student{
public:
    string Name;
    int Age;
    char Gender;
    float ProgrammingGrade;
    //Creating a constructor
    Student(){}
    Student(string name,int age, char gender, float programmingGrade){
        Name=name;
        Age=age;
        Gender=gender;
        ProgrammingGrade=programmingGrade;
    }
};

void printStudents(Student* students, int size);

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
    //Hierarchy data structure
    //This is how you structure and organize folders
    //A single entity of a tree is called node, the root node is the top node... it does not have a parent
    //Connections between nodes are called edges
    //Children nodes can´t be interconnected... the children nodes at the bottom (no more children) are leaf nodes
    //Binary Search Tree - Binary tree with nodes that have children nodes in an specific order. Lower value on the left, higher value on the right

        //Level 1
        Node3* root=createNode(1); //Creating a root node of value 1
        //Level 2
        root->left=createNode(2); // Creating the left child with value 2
        root->right=createNode(3); //Creating the right child with value 3
        //Level 3
        root->left->left=createNode(4);//Creating a left child to the left child with value 4 and so on
        root->left->right=createNode(5);
        root->right->left=createNode(6);
        root->right->right=createNode(7);
        //Level 4
        root->left->right->left=createNode(9);
        root->right->right->left=createNode(15);
    
        /* TRAVERSING AND SEARCHING THE TREE, ALGORITHMS */
        //Tree traversal is the only way to access the data that is stored in the tree

        //BFS Breadth-first search (Searches de width) and DFS Depth-first search (Searches the depth)
        //3 different DFS -  Preorder, Inorder, Postorder

        //Preorder (data,left,right)
            cout<<"Pre-order DFS"<<endl;
            printTree(root);
        //Inorder (left,data,right)
            cout<<"Inorder DFS"<<endl;
            inorderTree(root);
        //Postorder (left,right,data)
             cout<<"Postorder DFS"<<endl;
             postOrderTree(root);
    
    //STL Vector, Arrays, Dynamic Arrays and Vectors
    //All the benefits of dynamic arrys but with less work
    //Vectors resize themselves automaticaly when elements are inserted or deleted

        vector<int> numbersVector; //Created a vector of integers called "numbersVector"
        //Adding elements to a vector
        numbersVector.push_back(0);
        for (int i = 1; i <= 10; i++)
        {
            numbersVector.push_back(i);
        }
        
        //Access and print elements
        cout<<"Printing the elements in the vector"<<endl;
        for (int number:numbersVector)//For number of numbersVector
        {
            cout<<number<<endl;
        }

        //Iterators. Functions that point to locations in your vector (beggining and end)
        cout<<"Printing the elements in the vector with iteratiors"<<endl;
        for (auto it=numbersVector.begin();it!=numbersVector.end();it++)//it is iterator... go from iteratiors beggining to its end
        {
             cout<< *it <<endl; //We have to derreference the iterator since it is a pointer
        }
        

        //other functionalities of vectors
        cout<<"Other functionalities"<<endl;
        auto it = numbersVector.begin();
        cout<<*(it+5)<<endl;//This shows the 6th element in the vector 
        
        cout<<numbersVector.size()<<endl;//Current size
        cout<<numbersVector.max_size()<<endl;//Max number of elements you can add
        cout<<numbersVector.capacity()<<endl;//Elements you can add before resizing
        numbersVector.resize(8);//Resize to specified size
        cout<<numbersVector.size()<<endl;//Current size

        if(numbersVector.empty()){
            cout<<"Vector is Empty"<<endl;
        } else{
            cout<<"Vector is not empty"<<endl;
        }

        cout<<numbersVector[0]<<endl;//element at first position
        cout<<numbersVector.front()<<endl;//Front element
        cout<<numbersVector.back()<<endl;//Last element of the vector
        numbersVector.clear();//Delete the elements in the vector

        //Rebuilding the vector
        for (int i = 1; i <= 10; i++)
        {
            numbersVector.push_back(i);
        }
        //Insert elements at an specific position
        numbersVector.insert(numbersVector.begin()+5,88);//Insert an element at the 6th position with the number 88
        //printing the elements
        for (auto n:numbersVector){
            cout<<n<<endl;
        }
        //Remove an element at an specific position
        numbersVector.erase(numbersVector.begin()+5);//Erase an element at the 6th position with the number 88
        //printing the elements
        for (auto n:numbersVector){
            cout<<n<<endl;
        }
        numbersVector.pop_back();//This removes an element from the end of the vector 

    //ARRAYS OF OBJECTS

        int luckyNumbers[5]={3,17,21,25,32}; //Array of primitive data type
        

        //Creating an array of objects of class student

        Student students[3]={ //Array of 3 students
            {"Pablo",27,'m',9.5},
            {"Petra",29,'f',10},
            {"Juan",22,'m',7}
        };  

        //If you want the user to initialize the values
            /* Student students[3];
            for (int i = 0; i < 3; i++)
            {
                cout<<"STUDENT: "<<i+1<<endl;
                Student s;
                cout<<"Name: ";
                cin>>s.Name;
                cout<<"Age: ";
                cin>>s.Age;
                cout<<"Gender: ";
                cin>>s.Gender;
                cout<<"Programming Grade: ";
                cin>>s.ProgrammingGrade;
                students[i]=s;
            } */
        
        //Accessing properties of individual objects in the array

        cout<<"Programming grade of "<<students[0].Name<<" is "<<students[0].ProgrammingGrade<<endl;
        cout<<"Programming grade of "<<students[1].Name<<" is "<<students[1].ProgrammingGrade<<endl;
        cout<<"Programming grade of "<<students[2].Name<<" is "<<students[2].ProgrammingGrade<<endl;

        //Making calculations within the objects
        //Average of the students
        float gradeSum=0;
        float classAverage;
        int sizeOfClass=0;
        for (int i = 0; i < 3; i++)
        {
            gradeSum+=students[i].ProgrammingGrade;
            sizeOfClass++;
        }
     
        classAverage=gradeSum/(float)sizeOfClass;
        cout<<"The class average is "<<fixed<<setprecision(2)<<classAverage<<endl;
    

    //DYNAMIC ARRAY OF OBJECTS
        /* int size;
        cout << "Number of students: ";
        cin >> size;

        Student* studentsDyn = new Student[size]; // Pointer to Student to make it dynamic in size

        for (int i = 0; i < size; i++) {
            cout << "STUDENT: " << i + 1 << endl;
            Student s;
            cout << "Name: ";
            cin >> s.Name;
            cout << "Age: ";
            cin >> s.Age;
            cout << "Gender: ";
            cin >> s.Gender;
            cout << "Programming Grade: ";
            cin >> s.ProgrammingGrade;
            studentsDyn[i] = s;
        }

        char choice;
        cout<<"Do you want a bigger array?"<<endl;
        cin>>choice;
        if(choice=='n' || choice=='N'){
            delete [] studentsDyn;
            return 0;
        }

        int newSize;
        cout<<"Enter new size: ";
        cin>>newSize;

        Student* newStudents = new Student[newSize];
        //memcpy(newStudents,studentsDyn,sizeof(Student)*size);//(Destination,Previous Array,size) Auto Copy the elements from the previous array
        for (int  i = 0; i < size; i++) //Manual way
        {
            newStudents[i]=studentsDyn[i];
        }
        delete [] studentsDyn;
        studentsDyn=newStudents;
        
        for (int i = size; i < newSize; i++) {
            cout << "STUDENT: " << i + 1 << endl;
            Student s;
            cout << "Name: ";
            cin >> s.Name;
            cout << "Age: ";
            cin >> s.Age;
            cout << "Gender: ";
            cin >> s.Gender;
            cout << "Programming Grade: ";
            cin >> s.ProgrammingGrade;
            studentsDyn[i] = s;
        }
        printStudents(studentsDyn, newSize);
        delete[] studentsDyn; // Delete Array of studentsDyn...You have to free memory with delete */


    
        
       



        

         

    
   













        

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
Node3* createNode(int data){ //Function to create a node for the binary tree
    Node3* newNode = new Node3();
    newNode->data =data;
    newNode->left= newNode->right=nullptr;
    return newNode;   
}
void printTree(Node3* root){
    if (root==nullptr)return;//Base condition to exit the function
    cout<<root->data<<endl;
    printTree(root->left); //Recursive fuction that will take root left node as an argument
    printTree(root->right);
    
}
void inorderTree(Node3* root){
    if(root==nullptr)return;
    inorderTree(root->left);
    cout<<root->data<<endl;
    inorderTree(root->right);
}
void postOrderTree(Node3* root){
    if(root==nullptr)return;
    inorderTree(root->left);
    inorderTree(root->right);
    cout<<root->data<<endl;
}
void printStudents(Student* students, int size){
    for (int i = 0; i < size; i++)
    {
        cout<<"Info for Student: "<<i<<endl;
        cout<<"Student's Name: "<<students[i].Name<<endl;
        cout<<"Student's Age: "<<students[i].Age<<endl;
        cout<<"Student's Gender: "<<students[i].Gender<<endl;
        cout<<"Student's Programming Grade: "<<students[i].ProgrammingGrade<<endl;
    }
    
}





