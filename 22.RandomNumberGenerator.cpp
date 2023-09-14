#include <iostream>
#include <ctime> //for random number

int main(){
    //pseudo-random = NOT truly random (but close) -> 유사난수

    //srand() -> Initialize random number generator.
    //() -> seed 값에 항상 변하는 값을 넣기 위해서 time을 사용함!
        srand(time(NULL));

    //whatever number we roll, divide it by 6
    //take the remainder and that's our number!
    //for (1~6) -> what we can do is add one
        int num = (rand() % 6) +1;
        std::cout << "num: " << num << '\n';

    //*three six-sided dice
        int num1 = (rand() % 6) +1;
        int num2 = (rand() % 6) +1;
        int num3 = (rand() % 6) +1;

        std::cout << "num1: " << num1 << '\n' << "num2: " << num2 << '\n' << "num3: " << num3;

    return 0; 
}