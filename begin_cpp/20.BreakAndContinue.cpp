#include <iostream>

int main(){
    //break = break out of a loop
    //continue = skip current iteration

    for(int i = 1; i <= 20; i++){
        if(i == 13){
            continue; //해당 숫자를 스킵한다
            //break; //12까지 출력된다
        }
        
        std::cout << i << '\n';
    }

    return 0;
}