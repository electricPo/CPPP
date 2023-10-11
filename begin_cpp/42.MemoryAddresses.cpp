#include <iostream>

int main(){
    //memory address = a location in memory where data is stored
    //a memory address can accessed with & (address-of operator)

    std::string name = "JOY"; 
    int age = 21;
    bool student = true;

    std::cout <<  &name << '\n'; //104997472
    std::cout << &age << '\n'; //104997462
    //boolean is take one byte of memory
    std::cout << &student << '\n'; //104997461

    //how much memory we need to allocate to fit a cerain value
    return 0;
}