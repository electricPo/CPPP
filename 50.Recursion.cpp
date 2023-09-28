#include <iostream>
    // recursion(재귀) =    a programing technique where a function
    //                      invoke itself from within
    //                      break a complex concept into a repeatagle single step

    //(iterative vs recursive)

    //advantages =  less code and is cleaner
    //              useful for sorting and searching algorithms

    //disadvantages =   uses more memory
    //                  slower
/////////////////////////////declaration////////////////////////////////

void walk(int steps);

int factorial(int num);


/////////////////////////////function call//////////////////////////////
int main(){
    //walk(100);

    std::cout << factorial(10);

    return 0;
}


/////////////////////////////definition////////////////////////////////

//1) iteratively
void walk(int steps){
    // for(int i = 0; i < steps; i++){
    //     std::cout << "You take a step!" << '\n';
    // }
    
//2) recursively
    //function within a function
    //code read to easy
    // if(steps > 0){
    //     std::cout << "*You take a step!" << '\n';
    //     walk(steps -1);
    // }
}

int factorial(int num){
    //1) iteratively
    // int result = 1;
    // for(int i = 1; i <= num; i++){
    //     result = result * i;
    // }
    // return result;

    //2) recursively
    if(num > 1){
        return num * factorial(num - 1);
    } else {
        return 1;
    }
}