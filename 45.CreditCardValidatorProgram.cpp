#include <iostream>
//룬 알고리즘을 이용해 카드번호 유효검사 프로그램 만들기
/*
1. 오른쪽부터 짝수 위치의 숫자를 *2한다
2. *2 한 숫자가 두자리수라면 한자리수로 떨어트리고 결과물을 더한다 (sumEvenDigits)
3. 홀수 자리의 숫자를 모두 더한다 (sumOddDigits)
4. 2.3.의 결과를 더한다
5. 4의 결과가 10으로 나누어떨어진다면 유효한 카드번호이다
*/

///////////////////declaration///////////////////////////
int getDigit (const int number);
int sumOddDigits(const std::string cardNumber);
int sumEvenDigits(const std::string cardNumber);

///////////////////output////////////////////////////////
int main()
{
    std::string cardNumber;
    int result = 0;

    std::cout << "Enter a credit card #: ";
    std::cin >> cardNumber;

    result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);

    if (result % 10 == 0){
        std::cout << cardNumber << " is valid";

    }else{
        std::cout << cardNumber << " is not valid";
    }
    return 0;
}

///////////////////definition///////////////////////////

int getDigit (const int number){
    //split the two numbers
    return number % 10 + (number / 10 % 10);
}
int sumOddDigits(const std::string cardNumber){
    int sum = 0;

    for(int i = cardNumber.size() - 1; i >=0; i-=2){
        //index i, we subtract the character zero
        //character 0 has a decimal value of 48
        //we'll end up working with is the decimal representation
        sum += cardNumber[i] - '0';
    }

    return sum;
}
int sumEvenDigits(const std::string cardNumber){
    
    int sum = 0;
    //숫자열을 오른쪽부터 역순으로 탐지
    //for 루프의 초기값은 i를 문자열의 마지막에서 두 번째 인덱스로 설정하고, i를 2씩 감소시키면서 각 문자를 추출
    //cardNumber.size() - 2: 문자열의 길이에서 2를 뺀 값, 즉 "마지막에서 두 번째 인덱스"
    for(int i = cardNumber.size() - 2; i >=0; i-=2){
        //index i, we subtract the character zero
        //character 0 has a decimal value of 48
        //we'll end up working with is the decimal representation
        //문자열인 배열을 정수타입으로 변환하기 위해 아스키코드를 사용한다
        //숫자와 문자 변환을 위해 사용하는 방식
        
        sum += getDigit((cardNumber[i] - '0') * 2);
    }

    return sum;
}