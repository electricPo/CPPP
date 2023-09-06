#include <iostream>
#include <vector>
//data type for a pair list
//typedef std::vector<std::pair<std::string,int>> pairlist_t; //긴 데이터타입에 alias 생성

//typedef&alias exmeples
//typedef std::string text_t;
//typedef int number_t;

//using 선언 exemples
using text_t = std::string;
using number_t = int;
int main(){
    //typedef = reserved keyword used to create an additional name
    //          (alias) for another data type.
    //          new identifier for an existing type
    //          Helps with readability and reuces typos


    //std::vector<std::pair<std::string,int>> pairlist;
    //pairlist_t pairlist; //it helps with code readability
    text_t firstName = "Joy";
    number_t age = 21;
    std::cout << firstName << '\n';
    std::cout << age << '\n';
    return 0;

}