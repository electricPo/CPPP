#include <iostream>

int main(){
    /*
        loop(){
            loop(){

            }
        }
    
    */

    //*count to 10 tree times

        //outer loop
        for(int i = 1; i <= 3; i++){
            
            //basic loop
            //counting index를 j로 설정
            for(int j = 1; j <= 10; j++){
                std::cout << j << ' ';
            }
            std::cout << '\n';                       
        
        }

    //*print a rectangle made out of symbols
        int rows;
        int columns;
        char symbols;

        std::cout << "How many rows?: ";
        std::cin >> rows;

        std::cout << "How many columns?: ";
        std::cin >> columns;

        std::cout << "Enter a symbol to use: ";
        std::cin >> symbols;

        //outer loop
        for(int i = 1; i <= rows; i++){
            
            //basic loop
            //counting index를 j로 설정
            for(int j = 1; j <= columns; j++){
                std::cout << symbols;
            }
            std::cout << '\n';                       
        
        }


    return 0;
}