#include <iostream>

int main(){
    //arithmetic operators(산술연산자) = return the result of a specific arithmetic operation(+ - * /)
    
    //1. +
        int students = 20;

        // 1) students = students + 1;
        // 2) students+=1;
        // 3) students ++;

    //2. -
        // 1) students = students -1;
        // 2) students -=1;
        // 3) students --;

    //3. *
        // 1) students = students * 2;
        // 2) students *= 2;

    //4. /
        // 1) students = students / 2;
        // 2) students /= 2;
            //int 타입인 경우 소수점 truncate
        //students = students / 3; //->6 출력

            //double 타입인 경우 소수점 출력
        double teacher = 20;
        teacher /= 3; //->6.66667 출력

        int remainder = students % 3; //나머지 출력

    //5. parenthesis()
        //multiplication & division
        //addition & subtraction

        int dogs = 6 - (5 + 4) * 3 / 2;

    std::cout << students <<'\n';
    std::cout << teacher <<'\n';
    std::cout << remainder <<'\n';
    std::cout << dogs <<'\n';
    return 0;
}