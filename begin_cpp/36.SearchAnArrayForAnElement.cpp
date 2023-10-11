#include <iostream> //cin cout
#include <string> //string
//how we can search an array for an elements

///////////////declaration////////////////////
int searchArray(std::string array[], int size, std::string element);


////////////////output////////////////////////
int main(){
    //int numbers[] = {1,2,3,4,5,6,7,8,9,10};
    std::string foods[] = {"pizza", "hamburger", "potato"};
    int size = sizeof(foods)/sizeof(foods[0]);
    int index;
    std::string myFood;

    std::cout << "Enter element to search for: " << '\n';
    std::getline(std::cin, myFood);

    index = searchArray(foods, size, myFood);

    if(index != -1){
        std::cout << myFood << " is at index " << index;
    }
    else{
        std::cout << myFood << " is not in the array";
    }
    return 0;
}

///////////////definition////////////////////
//return index of the element that we're searching
int searchArray(std::string array[], int size, std::string element){
    //linear search
    for(int i=0; i < size; i++){
        //can rename of parameters
        if(array[i] == element){
            return i;
        }
    }
    //in programming,
    //negative one serves as a sentinel value(보초값)
    //sentinel value: 반복을 중단하기 위해 사용된 값
    //we return i or negative one!
    return -1;
}