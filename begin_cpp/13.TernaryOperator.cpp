#include <iostream>

int main(){
    //ternary operator ?: = replacement to an if/else statement
    //condition ? expression1 : expression2;

    //1) if else 를 사용해서 표현하는 경우
        // int grade = 75;

        // if(grade >= 60){
        //     std::cout << "You pass!";
        // }else{
        //     std::cout << "You fail!";
        // }    

    //2) tenart operator를 사용해 표현하는 경우

        int grade;

        std::cout << "insert your percent : ";
        std::cin >> grade;
        grade>=60 ? std::cout << "You pass!" << '\n' : std::cout << "You fail!" << '\n';

        //나머지가 1인 경우 "ODD" 출력, 1이 아닌 경우 "EVEN" 출력
        int number;
        std::cout << "insert any number :";
        std::cin >> number;
        number % 2 == 1 ? std::cout << "ODD" << '\n' : std::cout << "EVEN" << '\n';

        bool hungry = true;
        //hungry ? std::cout << "You are hungry" : std::cout << "You are full";
        std::cout << (hungry ? "You are hungry" : "You are full");

    return 0;
}