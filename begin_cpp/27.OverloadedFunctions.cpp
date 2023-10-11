#include <iostream>


//*******************declaration***********************
//overloaded functions
    //same name but need a different set of parameters
    void bakePizza();
    void bakePizza(std::string topping1);
    void bakePizza(std::string topping1, std::string topping2);


//***********************output************************
    int main() {
        //bakePizza function을 호출하며 인자(토핑)을 제공
        bakePizza("pepperoni", "olive");
        return 0;
    }

//******************definition*************************
    //overloading 1
    void bakePizza(){
        std::cout << "Here is your pizza" << '\n';
    }
    //overloading 2
    //parameters a function name plus
    void bakePizza(std::string topping1){
        std::cout << "Here is your " << topping1 << " pizza!" << '\n';
    }
    //overloading 3
    void bakePizza(std::string topping1, std::string topping2){
        std::cout << "Here is your " << topping1 << " and " << topping2 << " pizza!" << '\n';
    }