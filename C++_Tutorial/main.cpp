#include <iostream>
#include <string> // Include the necessary header for string

using std::string;

// Classes: The building block of Object-Oriented Programming or OOP
    // Class - User-defined data type
class AbstractEmployee{ //Abstraction Lesson 
    virtual void AskForPromotion()=0;//virtual and =0 makes it mandatory
};

class Employee:AbstractEmployee { //Added the AbstactEmployee 
public:
    string Name;
    string Company;
    int Age; // Corrected the data type to int

    void IntroduceYourself(){
        std::cout<<"Name - "<<  Name << std::endl; //Prints Name and the variable name
        std::cout<<"Company - "<<  Company << std::endl; //Same for this
        std::cout<<"Age - "<<  Age << std::endl;
    }

    //Constructor: No return type, same name as the class, has to be public
    Employee(string name, string company, int age){ //Set the parameters
        Name=name;
        Company=company;
        Age=age;
    }
    void AskForPromotion(){
        if(Age>30)
            std::cout<<Name<<" got promoted!"<<std::endl;
        else
            std::cout<<Name<<", sorry no promotion for you!"<<std::endl;
        
    }
    virtual void Work(){ //Virtual means.. check if there is implementation of this fuction in my derived /child classes, if yes...execute that function instead
        std::cout<<Name<<" is checking email, task backlog, performing tasks"<<std::endl;
    }
};

class Developer: public Employee {//This is going to be a child to the parent class "Employee", we put public to inherit properties in public
    //Developer has now all the properties of the Emplyee class
    public:
        string FavProgrammingLang;
        Developer(string name, string company, int age, string favProgrammingLang)
        :Employee(name,company,age)//Add constructor of the base class
        {
            FavProgrammingLang=favProgrammingLang;
        }
        void FixBug(){
            std::cout<<Name<<" fixed a bug for "<<Company<<" using "<<FavProgrammingLang<<std::endl;
        }
        void Work(){//this method exists int the employee parent class but with a diferent statement
        std::cout<<Name<<" is writing "<<FavProgrammingLang<<" code "<<std::endl;
        }
};

class Teacher: public Employee{ //Public lets it access the methods in Employee
 public:
    string Subject;
    Teacher(string name, string company, int age, string subject)
    :Employee(name,company,age)
    {
        Subject=subject;
    }
    void PrepareLesson(){
        std::cout<<Name<<" is preparing a "<<Subject<<" lesson."<<std::endl;
    }
    void Work(){ //this method exists int the employee parent class but with a diferent statement
        std::cout<<Name<<" is teaching "<<Subject<<" class "<<std::endl;
    }
};

class Student { //Used for encapsulations

private:
    string Name; //This properties are encapsulated
    string School;
    int Age;
public:
    void setName(string name){ //This is a setter
        Name = name;
    }
    string getName(){ //This is a getter
        return Name;
    }
    void setSchool(string school){ //This is a setter
        School = school;
    }
    string getSchool(){ //This is a getter
        return School;
    }
    void setAge(int age){
        //Validation Rule:
        if (age<=18){
            Age = age; //If they enter an age greater than 18, this will not set the age
        } 
    }
    int getAge(){
        return Age;
    }

    void IntroduceYourself(){
        std::cout<<"Name - "<<  Name << std::endl; //Prints Name and the variable name
        std::cout<<"School - "<<  School << std::endl; //Same for this
        std::cout<<"Age - "<<  Age << std::endl;
    }

    //Constructor: No return type, same name as the class, has to be public
    Student(string name, string school, int age){ //Set the parameters
        Name=name;
        School=school;
        Age=age;
    }


};

int main() {
    
    int number; // Creating a variable of type int
    // Creating Objects of the Class Employee

    /*
    Employee employee1; // Creating a variable of type/class Employee
    employee1.Name = "Pablo";
    employee1.Company = "Pedralbes";
    employee1.Age = 27; // Corrected to use an integer value
    employee1.IntroduceYourself();//This calls the fuction declared in the upper part


    Employee employee2;
    employee2.Name = "John";
    employee2.Company = "Amazon";
    employee2.Age = 32; //
    employee2.IntroduceYourself();

    */

    //Making Users like this would be very painfull... so

    //CONSTRUCTORS - Method invoked to create an object of a class
    //Constructors have to be public

   Employee employee3=Employee("Pedro","Youtube",31);//This calls the constructor, and these 3 are the set parametors
    employee3.IntroduceYourself(); //See above, this takes quite less time
    employee3.AskForPromotion();


    //Encapsulation
    //Idea of bundling data and methods that operate that data. 
    //We do this to prevent anything outside of our class to be able to directly access the data
    // Getters & Setters
    Student student1=Student("Pablo","UP",15);

    student1.setAge(18);//Changes the age to 39
    std::cout << student1.getName()<< " is " << student1.getAge()<<" years old."<< std::endl;

    //Abstraction  
    //Hiding complex things behind a procedure that makes those things look simple

    //Inheritance
    //Base/Super/Parent Class has Derived/Sub/Child Class
    //Childs inherits members from the Parent Class

    Developer developer1=Developer("Joselo","Oracle",27,"C++");
    developer1.FixBug();
    developer1.AskForPromotion();


    Teacher teacher1=Teacher("Jack","Cool School",35,"History");
    teacher1.PrepareLesson();
    teacher1.AskForPromotion();

    //Polymorphisim
    //The ability of an objetc or a method to have many forms
    developer1.Work(); //This prints the method directly in the developer class
    teacher1.Work(); //This prints the method directly in the teacher class

    //Create a pointer of type employee
    Employee * e1=&developer1;//The pointer holds a reference to the developer1
    Employee * e2=&teacher1;//The pointer holds a reference to the teacher1

    e1->Work(); //The arrow is when you want to access members using a pointer 
    e2->Work(); //This will access directly the Employee class and print the method in that class unless we make the "Work()" method virtual, which we have...

}
