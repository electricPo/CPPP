#include <iostream>
#include <ctime>

int main(){
    //random event program
    //srand(time(0));과 srand(time(NULL));는 기본적으로 동일한 기능
    //srand(time(NULL));가 더 흔하게 사용
    srand(time(0));
    int randNum = rand() % 5 +1;

    switch (randNum) {
        case 1: std::cout << "You win a bumper sticker!" << '\n';
            break;
        case 2: std::cout << "You win a t-shirt!" << '\n';
            break;
        case 3: std::cout << "You win a free lunch!" << '\n';
            break;
        case 4: std::cout << "You win a gift card!" << '\n';
            break;
        case 5: std::cout << "You win concert tickets!" << '\n';
            break;
    }
    return 0;
}