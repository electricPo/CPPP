#include <iostream>

int main(){
    //do while loop = do some block of code first, THEN repeat again if condition is true

    int number;

        //while문을 사용하는 경우

            std::cout << "Enter a positive #: " << '\n';
            std::cin >> number;

                while (number < 0) {
                    std::cout << "Enter a positive #: " << '\n';
                    std::cin >> number;
                }
                std::cout << "The # is: " << number;

        //do while문을 사용하는 경우

            do {
                std::cout << "Enter a positive #: " << '\n';
                std::cin >> number;
            } while (number < 0);

                std::cout << "The # is: " << number;


    return 0;
}