#include <iostream>

int main(){
    //array = a data structure that can hold multiple values
    //          values are accessed by an index number
    //          "Kind of like a variable that holds multiple values"

    std::cout << "********ex1*******" << '\n';

    //std::string cars[] = {"Convette", "Mustang", "Camry"};
    //std::cout << car; //0x61feb4 -> memory address of where our array

    //declare an array
    //set the size
    std::string cars[3];

    //assign values later
    cars[0] = "Camaro";
    cars[1] = "Mustang";
    cars[2] = "Camry";

    std::cout << cars[0] << '\n';
    std::cout << cars[1] << '\n';
    std::cout << cars[2] << '\n';

    std::cout << "********ex2*******" << '\n';

    double prices[] = {5.00, 7.50, 9.99, 125.00};

    std::cout << prices[0] << '\n';
    std::cout << prices[1] << '\n';
    std::cout << prices[2] << '\n';
    std::cout << prices[3] << '\n';

    return 0;
}