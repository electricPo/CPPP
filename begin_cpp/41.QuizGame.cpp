#include <iostream>
//quiz game
////////////////////////declaration/////////////////////////



////////////////////////output//////////////////////////////
int main(){
    
    std::string questions[] = { "1. what year was c++ created?: ",
                                "2. who invented c++?: ",
                                "3. what is the predecessor of c++: ",
                                "4. is the Earth flat?: "};
    //two dimension array
    std::string options[][4] =  {{"A. 1969", "B. 1975", "C. 1985", "D. 1993"},
                                {"A. Guido van Rossum", "B. Bjarne Stroustrup", "C. John Carmack", "D. Mark Zuckerburg"},
                                {"A. C", "B. C+", "C. C--", "D. B++"},
                                {"A. YES", "B. NO", "C. SOMETIMES", "D. WHAT'S EARTH?"}};
    char answerKey[] = {'C', 'B', 'A', 'B'};

    int size = sizeof(questions)/sizeof(questions[0]);
    char guess;
    int score = 0;

    for(int i = 0; i < size; i++){
        std::cout << "******************Quiz Game********************" << '\n';
        std::cout << questions[i] << '\n';
        std::cout << "***********************************************" << '\n';

        for(int j = 0; j < sizeof(options[i])/sizeof(options[i][0]); j++){
            std::cout << options[i][j] <<'\n';

        }
        std::cin >> guess;
        //toupper() : capitalize the character
        guess = toupper(guess);
        //answerKey[i] : current number of question
        if(guess == answerKey[i]){
            std::cout << "CORRECT" << '\n';
            score++;
        }
        else{
            std::cout << "WRONG!" << '\n';
            std::cout << "Anser is " << answerKey[i] << '\n';
            score--;
        }
    }
    
    std::cout << "******************Quiz Game********************" << '\n';
    std::cout << "*                  RESULT                     *" << '\n';
    std::cout << "***********************************************" << '\n';
    std::cout << "CORRECT GUESSES: " << score << '\n';
    std::cout << "# of QUESTIONS: " << size << '\n';
    //need to add cast to the divisor -> decimal portion
    std::cout << "SCORE: " << (score/(double)size)*100 << "%";


    return 0;
}


////////////////////////definition/////////////////////////