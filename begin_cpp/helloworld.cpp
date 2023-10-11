#include <iostream> //입출력기능

int main(){
    //출력하기: << std::endl과 << '\n'

    std::cout << "I like pizza!" << std::endl; //std::cout: standard output character /  <<은 출력을 의미 / endl : endline
    //endl은 출력버퍼를 플러시하기 때문에 추천
    std::cout << "It's really good!" << std::endl;

    std::cout << "I like pizza!" << '\n'; //<< '\n': 줄 바꾸기
    //<< '\n'은 성능 면에서 더 나음
    std::cout << "It's really good!" << '\n';
    return 0;
}
