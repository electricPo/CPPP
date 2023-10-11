#include <iostream>
//defferences between pass by value and pass by reference
//값에 의한 전달 vs 참조에 의한 전달
//1)값에 의한 전달로는 원래 x, y의 값이 변경되지 않는다(passed by value, we create copies of x and y)
//2)값을 변경하고 싶다면 참조에 의한 전달 방식을 사용한다(passed by memory addresses to where the original x and y variables are located)


////////////////////////declaration/////////////////////////
void swap(std::string &x, std::string &y);


////////////////////////output//////////////////////////////
int main(){

    std::string x = "Kool-Aid";
    std::string y = "Water";

    swap(x, y);

    std::cout << "main x: " << x << '\n';
    std::cout << "main y: " << y << '\n';    
    return 0;
}


////////////////////////definition/////////////////////////
//function to swap two variables
void swap(std::string &x, std::string &y){
    std::string temp;

    temp = x;
    x = y;
    y = temp;

    std::cout << "swap x: " << x << '\n';
    std::cout << "swap y: " << y << '\n';

}