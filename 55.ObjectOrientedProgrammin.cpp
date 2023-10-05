#include <iostream>

class Human{
    public:
        std::string name = "Rick";
        std::string occupation = "scientist";
        int age = 70;
    //method is a function that belongs to a class
    void eat(){
        std::cout << "This person is eating" << '\n';
    }
    void drink(){
        std::cout << "This person is drinking" << '\n';
    }
    void sleep(){
        std::cout << "This person is sleeping" << '\n';
    }
};

class Car{
    public:
        std::string make;
        std::string model;
        int year;
        std::string color;

        void accelerate(){
            std::cout << "You step on the gas!" << '\n';
        }
        
        void brake(){
            std::cout << "You step on the barkes!" << '\n';
        }
};

int main(){
    //object = A colloction of attributes and methods
    //          They can have charateristics and could perform actions
    //          Can be used to mimic real world items (ex. phone, book...)
    //          Created from a class which acts as a "blue-print"

    Car car1;

    car1.make = "Ford";
    car1.model = "Mustang";
    car1.year = 2023;
    car1.color = "silver";
    
    std::cout << car1.make << '\n';
    std::cout << car1.model << '\n';
    std::cout << car1.year << '\n';
    std::cout << car1.color << '\n';

    car1.accelerate();
    car1.brake();

    Human human1;
    Human human2;

    std::cout << human1.name << '\n';
    std::cout << human1.occupation << '\n';
    std::cout << human1.age << '\n';

    std::cout << human2.name << '\n';
    std::cout << human2.occupation << '\n';
    std::cout << human2.age << '\n';
  

    return 0;
}