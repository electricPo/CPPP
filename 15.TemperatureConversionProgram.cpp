#include <iostream>
//화씨(Fagrenheit) 섭씨(Celsius) 변환기

int main(){

    double temp;
    char unit;

    std::cout << "************ temperature conversion ************" << '\n';
    std::cout << "F = Fahrenheit" << '\n';
    std::cout << "C = Celsius" << '\n';
    std::cout << "What unit would you like to convert to: " << '\n';
    std::cin >> unit;

    if(unit == 'F' || unit == 'f'){

        std::cout << "Enter the temperature in Celsius: " << '\n';
        std::cin >> temp;

        temp = (1.8 * temp) + 32.0;
        std::cout << "temperature is " << temp << "F" << '\n';

    }else if(unit == 'C' || unit == 'c'){

        std::cout << "Enter the temperature in Fagrenheit" << '\n';
        std::cin >> temp;

        temp = (temp -32)/1.8;
        std::cout << "temperature is " << temp << "C" << '\n';

    }else{

        std::cout << "please enter in only 'F' or 'C'!" << '\n';

    }

    std::cout << "************************************************" << '\n';
    return 0;
    
}