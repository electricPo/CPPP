#include <iostream>

int main(){
    //switch = alternative to using many "else if" statements
    //          compare one value against matching cases
    
    char grade;

    std::cout << "Wthat letter grade?: ";
    std::cin >> grade;

    switch(grade){
        case 'A':
            std::cout << "You did grat!";
        break; 
        case 'B':
            std::cout << "You did good!";
        break;
        case 'C':
            std::cout << "you did okay";
        break;
        case 'D':
            std::cout << "You did not to good";
        break;
        case 'F':
            std::cout << "YOU FAILED!";
        break;
        default:
            std::cout << "pleas only enter in a letter grade(A-F)";
    }





    //입력한 달 출력하기 (switch 문)
    // int month;
    // std::cout << "Enter the month (1-12)";
    // std::cin >> month;
    
    // switch(month){
    //     case 1:
    //         std::cout << "It is January";
    //     break;
    //     case 2:
    //         std::cout << "It is Febuary";
    //     break;
    //     case 3:
    //         std::cout << "It is March";
    //     break;
    //     case 4:
    //         std::cout << "It is April";
    //     break;
    //     case 5:
    //         std::cout << "It is May";
    //     break;
    //     case 6:
    //         std::cout << "It is June";
    //     break;
    //     case 7:
    //         std::cout << "It is July";
    //     break;
    //     case 8:
    //         std::cout << "It is August";
    //     break;
    //     case 9:
    //         std::cout << "It is September";
    //     break;
    //     case 10:
    //         std::cout << "It is October";
    //     break;
    //     case 11:
    //         std::cout << "It is November";
    //     break;
    //     case 12:
    //         std::cout << "It is December";
    //     break;
    //     default:
    //         std::cout << "Pleas enter in only numbers! (1-12)";

    // }


    //입력한 달 출력하기 (if 문)
    // if(month == 1){
    //     std::cout << "it is January";
    // } else if (month == 2){
    //     std::cout << "it is Febuary";
    // } else if (month == 3){
    //     std::cout << "it is March";
    // } else if (month == 4){
    //     std::cout << "it is April";
    // } else if (month == 5){
    //     std::cout << "it is May";
    // } else if (month == 6){
    //     std::cout << "it is June";
    // } else if (month == 7){
    //     std::cout << "it is July";
    // } else if (month == 8){
    //     std::cout << "it is August";
    // } else if (month == 9){
    //     std::cout << "it is September";
    // } else if (month == 10){
    //     std::cout << "it is October";
    // } else if (month == 11){
    //     std::cout << "it is November";
    // } else if (month == 12){
    //     std::cout << "it is December";
    // } else {
    //     std::cout << "You didn't enter a number between (1-12)";
    // }

    return 0;
}