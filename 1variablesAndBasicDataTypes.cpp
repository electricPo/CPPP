#include <iostream>

int main() {
    //디렉토리 에러 -> 해결) VSCODE 파일명은 카멜식으로 표기하고 띄어쓰기 없게

    //declaration
    int x;
    //assignment
    x = 5;

    std::cout << x << '\n';

    //declaration & assignment
    int a = 5;
    int b = 6;
    int sum = a + b;

    std::cout << a << '\n';
    std::cout << b << '\n';
    std::cout << sum << '\n';


    //integer (whole number)
    int age = 21;
    int year = 2023;
    int days = 7.5; //output 7

    //double (number including decimal)
    double price = 10.99;
    double gpa = 2.5;
    double temperature = 25.1;

    std::cout << age << '\n';
    std::cout << year << '\n';
    std::cout << days << '\n';
    std::cout << price << '\n';
    std::cout << gpa << '\n';
    std::cout << temperature << '\n';

    //single character
    char grade = 'A';
    char initial = 'B';
    //char initial = 'Bc'; //multi-character character constant
    char currency = '$';

    std::cout << grade << '\n';
    std::cout << initial << '\n';
    std::cout << currency << '\n';

    //boolean (ture or false)
    bool student = true; //재학생
    bool power = true;
    bool forSale = true;

    //string (objects that represents a sequence of text)

    std::string name = "Joy";
    std::string day = "Friday";
    std::string food = "pizza";
    std::string address = "123 Fake St.";

    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old";

    return 0;
}