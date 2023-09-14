#include <iostream>

int main(){
    std::string name;

    // if(name.empty()){

    //     std::cout << "Enter your name: ";
    //     std::getline(std::cin, name);

    // }

    // while(name.empty()){ //조건이 true이면 while문 안을 돌고 다시 돌아와서 조건을 확인

    //     std::cout << "Enter your name: ";
    //     std::getline(std::cin, name);

    // }

    //infiniteLoop 
    while(1==1){
        std::cout << "Help! I'm stuck in an infinite loop!";
    }

    std::cout << "Hello " << name << '\n';

    return 0;
}