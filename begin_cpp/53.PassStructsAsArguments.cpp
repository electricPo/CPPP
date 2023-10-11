#include <iostream>


//you can pass by value
//1. pass by value
//2. pass by reference


//////////////////////declaration///////////////////////
struct Car{
    std::string model;
    int year;
    std::string color;
};

void printCar(Car &car);
void paintCar(Car &car, std::string color);


//////////////////////output////////////////////////////
int main(){
    Car car1;
    Car car2;

    car1.model = "Mustang";
    car1.year = 2023;
    car1.color = "red";

    car2.model = "Corvette";
    car2.year = 2024;
    car2.color = "blue";

    paintCar(car1, "silver");
    paintCar(car2, "gold");
    printCar(car1);
    printCar(car2);


    return 0;
}

//////////////////////definition///////////////////////
void printCar(Car &car){
    //printing the members

    std::cout << &car << '\n';
    std::cout << car.model << '\n';
    std::cout << car.year << '\n';
    std::cout << car.color << '\n';
}

void paintCar(Car &car, std::string color){
    //copy of our car structs
    //and change the color of the copies
    //rather than the originals

    //you need to make any changes to the original
    //use the address of operator (&car)
    car.color = color;
}