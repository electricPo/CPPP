#include <iostream>

//cout << (insertion operator)
//cin >> (extraction operator)

int main(){
    
    std::string name;
    int age;

    std::cout << "What's your age?: ";
    std::cin >> age;

    std::cout << "What's your full name?: ";

    //std::cin >> name; //->한 단어만 인식한다

    //띄어쓰기가 있는 문장을 입력하고 싶음 -> getline()
    std::getline(std::cin >> std::ws, name);
    //std::ws -> 공백문자 추출(공백문자를 건너뛴다)

    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old";
    
    return 0;
}