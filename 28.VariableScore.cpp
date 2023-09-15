#include <iostream>
//Local variables = declared inside a function or block {}
//Globla variables = declared outside of all functions

//***********************declaration********************************
//*Global variable
    /*
        avoid usint global variables if you can
        1.pollutes the global namespace
        2.less secure
    */
int myNum = 3;

void printNum();

//************************output*****************************
int main(){
    
    /*  작동순서:
        main함수에서 printNum함수를 호출, 실행
        printNum함수가 종료되고 main 함수로 돌아간다
    */

    //::scope resolution operator
    int myNum = 1;

    //*Local variable
    //1.
    printNum();

    //2.
    std::cout << "main global " << ::myNum << '\n';
    std::cout << "main local " << myNum << '\n';
    return 0;
}

//********************definition**************************
void printNum(){
    int myNum = 2;
    std::cout << "printNum global " <<  ::myNum << '\n';
    std::cout << "printNum local " << myNum << '\n';
    //error: 'myNum' was not declared in this scope
}