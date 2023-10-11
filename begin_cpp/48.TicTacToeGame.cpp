#include <iostream>
#include <ctime>

//////////////////////function declaration/////////////////////////


//pointer to an array named spaces
//spaces will be a one-dimensional array(what spots are taken what spots are occupied)
//*spaces는 메모리 주소에 접근하여 배열 내용을 변경하거나 읽을 수 있다
void drawBoard(char *spaces);
void playerMove(char *spaces, char player);
void computerMove(char *spaces, char computer);
bool checkWinner(char *spaces, char player, char computer);
bool checkTie(char *spaces);

//////////////////////////////call////////////////////////////////

int main(){
    char spaces[9] = {' ',' ',' ',' ',' ',' ',' ',' ',' '};
    char player = 'X';
    char computer = 'O';
    //게임진행여부
    bool running = true;


    //when we pass an array to a function it decays into a pointer
    drawBoard(spaces);
    while(running){

        playerMove(spaces, player);
        drawBoard(spaces);

        if(checkWinner(spaces, player, computer)){
            running = false;
            break;
        }
        else if(checkTie(spaces)){
            running = false;
            break;
        }

        computerMove(spaces, computer);
        drawBoard(spaces);

        if(checkWinner(spaces, player, computer)){
            running = false;
            break;
        }

        else if(checkTie(spaces)){
            running = false;
            break;
        }

    }

    std::cout << "Thanks for playing" << '\n';

    return 0;
}


//////////////////////function definition/////////////////////////
//보드판 출력
void drawBoard(char *spaces){
    //1)grid of nine spaces
    std::cout << '\n';
    std::cout << "     |     |     " << '\n';
    //in the middle i'm going to add one of the elements of our array spaces
    std::cout << "  " << spaces[0] << "  |  " << spaces[1] << "  |  " << spaces[2] << "  " << '\n';
    std::cout << "_____|_____|_____" << '\n';

    std::cout << "     |     |     " << '\n';
    //in the middle i'm going to add one of the elements of our array spaces
    std::cout << "  " << spaces[3] << "  |  " << spaces[4] << "  |  " << spaces[5] << "  " << '\n';
    std::cout << "_____|_____|_____" << '\n';

    std::cout << "     |     |     " << '\n';
    //in the middle i'm going to add one of the elements of our array spaces
    std::cout << "  " << spaces[6] << "  |  " << spaces[7] << "  |  " << spaces[8] << "  " << '\n';
    std::cout << "     |     |     " << '\n';
    std::cout << '\n';
};
//palyer move 출력
void playerMove(char *spaces, char player){
    int number;

    do{
        std::cout << "Enter a spot to place a marker (1-9)";
        std::cin >> number;
        //because the array start with zero
        number --;
        if(spaces[number] == ' '){
            spaces[number] = player;
            break;
        }
    }while ( !number > 0 || !number <8);
    

};
//computer move 출력
void computerMove(char *spaces, char computer){
    int number;

    while(true){
        srand(time(NULL));
        number = rand() % 9;
        if(spaces[number] == ' '){
            spaces[number] = computer;
            break;
        }
    }
};

bool checkWinner(char *spaces, char player, char computer){

    //가로행
    if( (spaces[0] != ' ') && 
        (spaces[0] == spaces[1] && spaces[1] == spaces[2])){
        spaces[0] == player ? std::cout << "YOU WIN!" << '\n'  : std::cout << "YOU LOSE!" << '\n';
    }
    else if( (spaces[3] != ' ') && 
        (spaces[3] == spaces[4] && spaces[4] == spaces[5])){
        spaces[3] == player ? std::cout << "YOU WIN!" << '\n'  : std::cout << "YOU LOSE!" << '\n';
    }
    else if( (spaces[6] != ' ') && 
        (spaces[6] == spaces[7] && spaces[7] == spaces[8])){
        spaces[6] == player ? std::cout << "YOU WIN!" << '\n'  : std::cout << "YOU LOSE!" << '\n';
    }//세로행
    else if( (spaces[0] != ' ') && 
        (spaces[0] == spaces[3] && spaces[3] == spaces[6])){
        spaces[0] == player ? std::cout << "YOU WIN!" << '\n'  : std::cout << "YOU LOSE!" << '\n';
    }
    else if( (spaces[1] != ' ') && 
        (spaces[1] == spaces[4] && spaces[4] == spaces[7])){
        spaces[1] == player ? std::cout << "YOU WIN!" << '\n'  : std::cout << "YOU LOSE!" << '\n';
    }
    else if( (spaces[2] != ' ') && 
        (spaces[2] == spaces[5] && spaces[5] == spaces[8])){
        spaces[2] == player ? std::cout << "YOU WIN!" << '\n'  : std::cout << "YOU LOSE!" << '\n';
    }//대각선
    else if( (spaces[0] != ' ') && 
        (spaces[0] == spaces[4] && spaces[4] == spaces[8])){
        spaces[0] == player ? std::cout << "YOU WIN!" << '\n'  : std::cout << "YOU LOSE!" << '\n';
    }
    else if( (spaces[2] != ' ') && 
        (spaces[2] == spaces[4] && spaces[4] == spaces[6])){
        spaces[2] == player ? std::cout << "YOU WIN!" << '\n'  : std::cout << "YOU LOSE!" << '\n';
    }
    else{
        return false;
    }
    return true;
};

bool checkTie(char *spaces){
    
    for(int i = 0; i < 9; i++){
        if (spaces[i] == ' '){
            return false;
        }
    }
    std::cout << "IT'S A TIE!" <<'\n';
    return true;
};