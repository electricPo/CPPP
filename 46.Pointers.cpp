#include <iostream>

int main(){
    //pointers = variable that stores a memort address of another variable
    //              sometimes it's easier to work with an address

    // & : address of operator(레퍼런스 변수)
    // * : dereference operator(포인터 변수)
    std::string name = "Joy";
    int age = 21;
    std::string freePizzas[5] = {"pizza1", "pizza2", "pizza3", "pizza4", "pizza5"};

    //포인터 변수 선언
    std::string *pName = &name;
    int *pAge = &age;
    //freePizzas array is already an address
    //so i don't need to use the address of operator(&)
    std::string *pFreePizzas = freePizzas;

    //to access the value at this address
    //you would use the dereference operator
    std::cout << pName << '\n';
    std::cout << *pName << '\n';
    std::cout << *pAge << '\n';
    //where pizza located
    std::cout << freePizzas << '\n';
    return 0;
}