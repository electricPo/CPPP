#include <iostream>

int main(){
    //type conversion = conversion a value of one data type to anather
    //                  implicit = automatic
    //                  Explicit = Precede value with new data type(int)


    //* implicit & Explicit
    
    //1. int -> double
        //int x = 3.14; //output -> 3
        //double x = 3.14; //output -> 3.14
        //convert 3.14 to integer then store it within the stubble x
        double x = (int) 3.14; //output -> 3
        std::cout << x <<'\n';

    //2. int -> char
        //char y = 100;
        std::cout<< (char)100 <<'\n'; //output -> d

    //3. int -> double (decimal point)
        int correct = 8;
        int questions = 10;
        double score = correct/(double)questions * 100; //output -> 80%

        std::cout << score << "%" <<'\n';

    return 0;
}