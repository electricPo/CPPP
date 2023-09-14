#include <iostream>

int main(){
    // && = check if two conditions are true
    // || = check if at least one of two conditions is true
    // ! = reverses the logical state of its operand

    int temp;
    bool sunny = true;

    std::cout << "Enter the temperature: ";
    std::cin >> temp;

    // && both condition must be true
    if(temp > 0 && temp < 30){
        std::cout << "The temperature is good!" << '\n';
    }
    else {
        std::cout << "The temperature is bad!" << '\n';
    }

    // || 둘 중 한 condition만 true여도 if문으로 이동

    if(temp <= 0 || temp >= 30){
        std::cout << "The temperature is bad!" << '\n';
    }else{
        std::cout << "The temperature is good!" << '\n';
    }

    //! not
    if(!sunny){
        std::cout << "It is sunny outside!" << '\n';
    }else{
        std::cout << "It is cloudy outside!" << '\n';
    }
    return 0;
}