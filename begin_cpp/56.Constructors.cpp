#include <iostream>


///////////////////////////declaration//////////////////////////
class Student{
    public:
    std::string name;
    int age;
    double gpa;
    //parameter names being different from the attribute
    // Student(std::string name, int age, double gpa){
    //     this->name = name;
    //     this->age = age;
    //     this->gpa = gpa;
    // }

    Student(std::string x, int y, double z){
        name = x;
        age = y;
        gpa = z;
    }

};

class Car{
    public:
        std::string make;
        std::string model;
        int year;
        std::string color;

    Car(std::string make, std::string model, int year, std::string color){
        this->make= make;
        this->model= model;
        this->year= year;
        this->color=color;
    }
};


///////////////////////////output//////////////////////////
int main(){
    //constructor = special method that is automatically called when an objuct is instantiated
    //              useful for assigning values to attributes as arguments
    Student student1("Spongebob", 25, 3.2);
    Student student2("Patrick", 45, 1.5);
    Student student3("Sandy", 21, 4.5);
    
    std::cout << student1.name << '\n';  
    std::cout << student1.age << '\n';
    std::cout << student1.gpa << '\n';

    std::cout << student2.name << '\n';  
    std::cout << student2.age << '\n';
    std::cout << student2.gpa << '\n';

    Car car1("Chevy", "Corvette", 2022, "blue");
    Car car2("Ford", "Mustang", 2023, "red");

    std::cout << car1.make << '\n';
    std::cout << car1.model << '\n';
    std::cout << car1.year << '\n';
    std::cout << car1.color << '\n';
    
    std::cout << car2.make << '\n';
    std::cout << car2.model << '\n';
    std::cout << car2.year << '\n';
    std::cout << car2.color << '\n';

    
    return 0;
}