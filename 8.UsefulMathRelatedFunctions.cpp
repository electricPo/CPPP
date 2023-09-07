#include <iostream>
#include <cmath>

int main(){

    double x = 3;
    double y = 4;
    double z;

    //1. max function
        //z = std::max(x, y);

    //2. min function
        //z = std::min(x, y);

    //3. pow() ->  base가 되는 숫자의 n 제곱을 구한다
        //z = pow(2, 3); //2의 3승 output -> 8
    
    //4. sqrt() -> x로 들어온 숫자에 루트를 씌워서 계산한 값을 반환
        //z = sqrt(9); // output -> 3
    
    //5. abs(); 0까지의 거리, negative number to pasitive number
        //z = abs(-3);

    double a = 3.14;
    double b = 2;
    double d = 3.99;
    double c;

    //6. round() //나머지 버림
        //c = round(a); // output -> 3

    //7. ceil() //올림 함수
        //c = ceil(a); // output -> 4

    //8. floor() //버림 함수
        c = floor(d); //output -> 3



    std::cout << c;

    return 0;
}