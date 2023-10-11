#include <iostream>

class Animal{
    public:
        bool alive = true;
    void eat(){
        std::cout << "This animal is eating" << '\n';
    }
};

//Dog class will inheret from the Animal class
class Dog : public Animal{
    public:
    void bark(){
        std::cout << "The dog goes woof!" << '\n';
    }
};

class Cat : public Animal{
    public:
    void meow(){
        std::cout << "The cat goes meow~" << '\n';
    }
};

class Shape{
    private:
        /* data */
    public:
        double area;
        double volume; 
        //we'll calculate the area and the volume   
};

class Cube : public Shape{
    public:
        double side;
    Cube(double side){
        this->side = side;
        this->area = side * side * 6;
        this->volume = side * side * side;
    }
};

class Sphere : public Shape{
    public:
        double radius;
    Sphere(double radius){
        this->radius = radius;
        this->area = 4 * 3.14159 * (radius * radius);
        this->volume = (4/3.0) * 3.14159 * (radius * radius * radius);
        // (4/3.0)을 사용하여 정확한 부동 소수점 결과를 얻기 위해 3 대신 3.0을 사용한 것
        //  4/3을 한다면 정수 나눗셈으로 결과값이 1이 나와버림
    }
};


int main(){

    // inheritance =    A class can receive attributes and methods from anather class
    //                  Children classes ingerit rom a Parent class
    //                  Helps to reuse similar code found within multiple classes

    Dog dog;
    Cat cat;

    std::cout << cat.alive << '\n';
    dog.eat();
    dog.bark();
    cat.meow();

    Cube cube(10);

    std::cout << "cube Area: " << cube.area << '\n';
    std::cout << "cube volume: " << cube.volume << '\n';

    Sphere sphere(50);

    std::cout << "sphere Area: " << sphere.area << '\n';
    std::cout << "sphere volume: " << sphere.volume << '\n';

    return 0;
}