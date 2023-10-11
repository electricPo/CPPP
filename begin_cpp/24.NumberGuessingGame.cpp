#include <iostream>
#include <ctime>

int main(){
    //simple number guessing game

    int num;
    int guess; //hold the current player guess
    int tries = 0; //tries 초기화 안할 시 무작위 값 할당

    srand(time(NULL));
    //random number between 1 and 100
    num = (rand() % 100) +1;
    std::cout << "************** number guessing game ***************" << '\n';
    
    do{
        std::cout << "Enter a geuss between (1~100): " ;
        std::cin >> guess;
        tries++;

        if (guess > num) {

            std::cout << "Too high!" << '\n';

        } else if (guess < num) {

            std::cout << "Too low!" << '\n';

        } else {
            std::cout << "Great! # of tries: " << tries << '\n';
        }
    }while(guess != num);

    std::cout << "***************************************************" << '\n';

    return 0;
}