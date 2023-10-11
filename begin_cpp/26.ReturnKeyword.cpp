#include <iostream>


//***************************declaration (선언) ****************
    //1) double type
        double square(double length);
        double cube(double length);

    //2) string type
        std::string concatString(std::string string1, std::string string2);

//********************* function 호출 및 출력 ********************
int main(){
    //return = return a value back to the spot
    //          where you called the encompassing function

    //1) double type 함수 호출 및 출력
        double length = 6.0;
        double area = square(length);
        double volume = cube(length);

        std::cout << "Area: " << area << "cm^2" << '\n';
        std::cout << "Volume: " << volume << "cm^3" << '\n';

    //2) string type 함수 호출 및 출력
        std::string firstName = "Joy";
        std::string lastName = "KIM";
        std::string fullName = concatString(firstName, lastName);

        std::cout << "Hello" << fullName;
        return 0;
        }

//***************************definition (정의) ****************
    //1) double type
    //need to return value we need to change this keyword void to double
        double square(double length){
            //double result = length * length;
            return length * length;
        }

        double cube(double length){
            return length * length * length;
        }

    //2) string type
        std::string concatString(std::string string1, std::string string2){
            return string1 + " " + string2;
        }