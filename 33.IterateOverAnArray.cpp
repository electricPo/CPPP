#include <iostream>

int main()
{
    std::string students[] = { "Spongebob", "Patrick", "Squidward", "Sandy", "joy"};
    char grades[] = {'A','B','C','D','F'};

    //1) 배열을 모두 나열한다
    // std:: cout << students[0] << '\n';
    // std:: cout << students[1] << '\n';
    // std:: cout << students[2] << '\n';

    //2) 반복문을 사용한다
    //      (not the best way-> 반복 범위를 일일히 지정해야 함)
    // for(int i = 0; i < 4; i++){
    //     std::cout << students[i] << '\n';
    // }

    //3) sizeof(배열 변수)/sizeof(데이터 타입)
    for(int i = 0; i < sizeof(students)/sizeof(std::string); i++){
         std::cout << students[i] << '\n';
     }

    //4) array of grades
    for(int i = 0; i < sizeof(grades)/sizeof(char); i++){
         std::cout << grades[i] << '\n';
     }


    return 0;
}