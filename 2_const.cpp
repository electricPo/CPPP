#include <iostream>

int main() {
    //The const keyword specifies that a variables value is constant
    //tells the compiler to prevnt anything from modifying it
    //(read-only)

    //상수 규칙 : 대문자로
    const double PI = 3.14159;
    //PI = 420.69; //상수는 재정의 불가
    const int LIGHT_SPEED = 2997924568;
    const int WIDTH = 1920;
    const int HEIGHT = 1000;
    double radius = 10;
    double circumference = 2 * PI * radius;

    std::cout << circumference << "cm";



    return 0;
}