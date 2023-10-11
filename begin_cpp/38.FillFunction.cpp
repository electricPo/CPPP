#include <iostream>

int main(){
    //fill() =  Fills a range of elements with a specified value
    //          fill(begin, end, value)
    //배열의 길이가 긴 경우
    //we have an array of 100 elements to store strings
    //fill all 100 elements with pizza
    
    //we can set some size actually
    const int SIZE = 99;
    
    std::string foods[SIZE];

    
    //배열을 등분하여 원하는 값을 출력한다
    fill(foods, foods + (SIZE/3), "pizza"); //1/3
    fill(foods + (SIZE/3), foods + (SIZE/3)*2, "hamburger"); //2/3
    fill(foods + (SIZE/3)*2, foods + SIZE, "hotdog"); //3/3

    for(std::string food : foods){
        std::cout << food << '\n';

    }
    return 0;
}