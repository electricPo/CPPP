#include <iostream>

int main(){
    
    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);


    //.length()

        if(name.length()>12){

            std::cout << "Your name can't be over 12 characters" << '\n';

        } else {

            std::cout << "welcome " << name << '\n';

        }


    //.empty() //check string is empty or not

        if(name.empty()){

            std::cout << "You didn't enter your name" << '\n';

        } else {

            std::cout << "welcome " << name << '\n';
        }

    //.at() //해당 위치의 글자 출력

        std::cout << name.at(0) << '\n';

    //.insert() //해당 위치에 삽입

        name.insert(0, "@");
        std::cout << name << '\n';

    //.find() //해당 부분이 몇번째에 위치하는지 숫자 출력

        std::cout << name.find(' ') << '\n';


    //.append()

        name.append("@gmail.com");

        std::cout << "Your username is now " << name << '\n';

    //.clear() //clear method

        name.clear();

        std::cout << "Hello " << name << '\n';

    //.append()

        name.append("@gmail.com");
         //name.clear() 메소드가 실행된 이후라 출력되지 않는다
        std::cout << "Your username is now " << name << '\n';

    //.erase();

        name.erase(0, 3); //ending index는 포함되지 않는다 -> 0,1,2만 지워짐
        std::cout << name << '\n';

    return 0;
}