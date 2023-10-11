#include <iostream>

int main(){
    //foreach loop =    loop that eases the traversal over an
    //                  iterable data set

    std::string students[] = {"Spongebob", "Patrick", "Squidward", "sandy"};
    int grades[] = {65, 72, 100, 30};

    //1)for loop
    // for(int i = 0; i < sizeof(students)/sizeof(std::string); i++){
    //      std::cout << students[i] << '\n';
    //  }

    //2)foreach loop(lessen text)
    // data type(what iterating over) +  name of element : iterable data set
    for(std::string student : students){
         std::cout << student << '\n';
    }

    //3)foreach loop (int type array)
    for(int grade : grades){
        std::cout << grade << '\n';
    }

    return 0;
}