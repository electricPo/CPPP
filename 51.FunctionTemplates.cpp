#include <iostream>
//templete prarmeter declaration
template <typename T, typename U>


// int max(int x, int y){
//     return(x > y) ? x : y;
// }
// // 소수점이 trucate 되지 않도록 overload
// double max(double x, double y){
//     return(x > y) ? x : y;
// }
// // returns char overload
// char max(char x, char y){
//     return(x > y) ? x : y;
// }



//세 개의 function을 function templetes를 이용해 하나로 만들기
auto max(T x, U y){
    //auto 키워드를 사용한 경우 컴파일러가 리턴타입을 자동으로 파악한다
    return(x > y) ? x : y;
}

int main (){
    //function template =   descrebes what a function looks like
    //                      can be used to generate as many overloaded functions
    //                      as needed, each using different data types
    std::cout << max(1, 2.5) << '\n';
    //단, 데이터타입이 MIX되는 경우 에러
    //function templetes에서 하나의 타입만 지정한 경우 같은 데이터타입만 사용할 수 있다
    return 0;
} 