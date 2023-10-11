#include <iostream>
#include <ctime>

//*******************declaration**********************
//파라미터 값을 사용하는 것: 함수가 외부에서 필요한 정보를 받아와야 할 때
char getUserChoice();//사용자가 값을 입력, 반환
char getComputerChoice();//컴퓨터의 선택을 무작위로 생성, 반환
void showChoice(char choice);
void choosWinner(char player, char computer);


//********************output***************************
int main(){

    char player;
    char computer;

    player = getUserChoice();
    std::cout << "You choice: ";
    showChoice(player);

    computer = getComputerChoice();
    std::cout << "Computer's choice: ";
    showChoice(computer);

    std::cout << "************!result!************" << '\n';
    choosWinner(player, computer);
    std::cout << "********************************" << '\n';

    return 0;

}

//**********************definition********************
char getUserChoice(){

    char player;
    std::cout << "Rock-Paper-Scisseors Game!" << '\n';

    do{
        std::cout << "Choos one of the following!" << '\n';
        std::cout << "*********************************" << '\n';
        std::cout << "'r' for rock" << '\n';
        std::cout << "'p' for paper" << '\n';
        std::cout << "'s' for scissors" << '\n';
        std::cin >> player;
    }while(player != 'r' && player != 'p' && player != 's');

    return player;
}

char getComputerChoice(){
    //random numbers
    srand(time(NULL));
    int num = rand() % 3 + 1;
    //switch문 안에서 return문을 만나면 함수가 종료되기 때문에 break;문이 없다
    switch(num){
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 's';
    }
    //코드의 안전성을 위해 디폴트(default) 값 0을 반환
    return 0;
}

void showChoice(char choice){
    switch (choice)
    {
    case 'r':
        std::cout << "Rock" << '\n';
        break;
    case 'p':
        std::cout << "Paper" << '\n';
        break;
    case 's':
        std::cout << "Scissors" << '\n';
        break;
    }
}

void choosWinner(char player, char computer){
    switch(player){

        case 'r': if(computer == 'r'){
                std::cout << "IT'S A tie!" <<'\n';
            }else if(computer == 's'){
                std::cout << "YOU WIN!" <<'\n';
            }else{
                std::cout << "YOU LOSE!" <<'\n';
            }
            break;

        case 'p': if(computer == 'r'){
                std::cout << "YOU WIN!" <<'\n';
            }else if(computer == 's'){
                std::cout << "YOU LOSE!" <<'\n';
            }else{
                std::cout << "IT'S A tie!" <<'\n';
            }
            break;

        case 's': if(computer == 'r'){
                std::cout << "YOU LOSE!" <<'\n';
            }else if(computer == 's'){
                std::cout << "IT'S A tie!" <<'\n';
            }else{
                std::cout << "YOU WIN!" <<'\n';
            }
            break;
    }
}