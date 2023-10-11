#include <iostream>


///////////////////class declaration///////////////////////////////
class Pizza{
    public:
        std::string topping1;
        std::string topping2;
    //same name, as long as different parameters
    //이렇게 오버로딩된 생성자를 사용하면 피자 객체를 다양한 방식으로 초기화할 수 있으며
    //사용자가 필요한 정보에 따라 편리하게 객체를 생성할 수 있다

    Pizza(std::string topping1){
        this->topping1 = topping1;
        
    }
    
    Pizza(std::string topping1, std::string topping2){
        this->topping1 = topping1;
        this->topping2 = topping2;
    }

    Pizza(){

    }
};


///////////////////output///////////////////////////////
int main(){

    //overloaded constructors = multiple constructors with the same name but different parameters
    //                          allows for varying arguments when instantiating an object
    //                          객체를 인스턴스화 할 때 다양한 인수를 허용한다

    Pizza pizza1("pepperoni");
    Pizza pizza2("mushrooms", "pepperoni");
    Pizza pizza3; //no argument

    std::cout << pizza2.topping1 << '\n';
    std::cout << pizza2.topping2 << '\n';

    std::cout << "Topping 1: " << pizza3.topping1 << '\n';
    std::cout << "Topping 2: " << pizza3.topping2 << '\n';

    return 0;
}