#include <iostream>
#include <string>
//in which we can accept user input and place it within an array
//once we declare a size we can't change it
int main(){
    std::string foods[5];
    int size = sizeof(foods)/sizeof(foods[0]);
    //배열에 "q가 출력되는 것을 방지"
    std::string temp;
    //if user want enter in three elements not all five
    //we should add some way to escape out of this for loop
    for(int i = 0; i < size; i++){
        //add plus one to i when we display our prompt -> 1부터 시작
        std::cout << "Enter a food you like or 'q' to quit #" << i +1 << ": ";
        std::getline(std::cin, temp);
        if(temp == "q"){
            break;
        }
        else{
            foods[i] = temp;
        }
    }
    std::cout << "You like the following food: " << '\n';

    //use a for each loop to iterate over the elements of this array
    //빈공간 출력하지 않으려
    //for(std::string food : foods){
        //chek the current element is empty
        //!foods[i].empty() :   we'll continue our for loop as long as
        //                      the current element is not empty
    for(int i = 0; !foods[i].empty(); i++){
        std::cout << foods[i] << '\n';
    }
    return 0;
}