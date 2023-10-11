#include <iostream>

int main(){
        //sizeof() = determines the size in bytes of a:
        //              variable, data type, class, objects, etc.
        std::string name = "joy is awesome";
        double gpa = 2.5;
        char grade = 'F';
        bool student = true;
        char grades[] = {'A', 'B', 'C', 'D', 'E', 'F'};
        std::string students[] ={"spongebob", "patrick", "squidward", "sandy"};


        //calculate how many elements are within an array
        //we could divide this by the size of on element
        //sizeof(grades) / sizeof(char) || sizeof(grades) / sizeof(grades[0])
        std::cout << sizeof(grades) / sizeof(char) << " elements" << '\n';
        std::cout << sizeof(students) / sizeof(std::string) << " elements" << '\n';
        return 0;
}