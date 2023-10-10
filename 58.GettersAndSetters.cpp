#include <iostream>
//클래스 안의 생성자(constructors)
//private 환경에서 getter, setter로 데이터를 은닉
//temperature 변수 캡슐화(변수로의 직접접근을 제한)

class Stove{
    private:
    //public:
    //public: accessible from outside of the class
        int temperature =0;
        //don't want people to mess with my temperature attribute
    public:
        //within a constructor
        Stove(int temperature){
            setTemperature(temperature);
        }

        //i can no longer update or change the temperature
        //it's readable but no writable
        int getTemperature(){
            return temperature;
        }
        void setTemperature(int temperature){
            //before we do set the temperature
            if(temperature < 0){
                this->temperature = 0; //현재 객체의 temperature 멤버 변수에 접근
            }
            else if(temperature >= 10)
            {
                this->temperature = 10;    
            }
            else{
                this->temperature = temperature;
            }
            
        }
};

int main(){

    //Abstraction   =   hiding unnecessary data from outside a class
    //getter        =   function that makes a private attribute READABLE
    //setter        =   function that makes a private attribute WRITEABLE

    //객체 생성 시 생성자 호출(반드시 하나의 정수를 매개변수로 받는다)
    Stove stove(-3);

    //no longer have access to this temperature attribute
    //stove.temperature = 1000000;

    //new temperature
    //using setter
    //클래스 안 생성자를 만들었으므로 주석처리한다
    //stove.setTemperature(30);

    //if i need access to the value found within this temperature
    //i can write a getter
    //it's function that will make an attribute readable
    std::cout << "The temperature setting: " << stove.getTemperature() <<'\n';

    return 0;
}