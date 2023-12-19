#include <iostream>
#include <string> // Include the necessary header for string

using std::string;

// Classes: The building block of Object-Oriented Programming or OOP
    // Class - User-defined data type
class Employee {
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

   Employee employee3=Employee("Pedro","Youtube",25);//This calls the constructor, and these 3 are the set parametors
    employee3.IntroduceYourself(); //See above, this takes quite less time



}
