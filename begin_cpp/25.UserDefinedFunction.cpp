#include <iostream>

//function declaration at the top,
//you'll have to add that parameter there
void happyBirthday(std::string name, int age);


//you'll need a matching set of parameters
//in the function definition and the declaration

int main() {
    //function = a block of reusable code
    //section of code more than once you might as well stick within a function

    std::string name = "Joy";
    int age = 21;
    happyBirthday(name, age); //() -> call function

    return 0;
}


//a lot of people like to define their functions after the main function
//it's another way in which you can write it
//just be sure to at least declare them before the main function

//function의 매개변수에 다음과 같이 parameter 값을 넣는다
void happyBirthday(std::string name, int age) {
    std::cout << "Happy Birthday to " << name <<'\n';
    std::cout << "Happy Birthday to " << name <<'\n';
    std::cout << "Happy Birthday dear " << name << '\n';
    std::cout << "Happy Birthday to " << name <<'\n';
    std::cout << "You are " << age << " years old" << '\n';

}