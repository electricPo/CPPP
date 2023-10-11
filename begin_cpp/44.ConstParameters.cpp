#include <iostream>

//////////////////////declaration//////////////////////////////

void printInfo(const std::string &name, const int &age);
///////////////////////////output//////////////////////////////
int main(){
    // const parameter =    parameter that is effectively read-only
    //                      code is more secure & conveys intent
    //                      useful for references and pointers
    
    //                      modified with a const keyword

    std::string name = "Joy";
    int age = 21;

    printInfo(name, age);

    return 0;

}
//////////////////////definition//////////////////////////////
//const parameters that means that we can't change the values
void printInfo(const std::string &name,const int &age){
    // name = " ";
    // age = 0;
    std::cout << name << '\n';
    std::cout << age << '\n';
}