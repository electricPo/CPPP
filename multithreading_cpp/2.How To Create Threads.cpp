//Threads:  Create using std::thread
//          doesin't return a value
//tasks:    create using std::async
//          return a value
//Both can use:
//              pointer to function
//              functor
//              lambda function

//c++표준에서 제공하는 std::thread -> 매개변수를 원하는 만큼 받을 수 있다

//Function Pointer
//Tdhis is the very basic form of thread creation

#include <iostream>
#include <thread>

void fun(){
    std::cout << "fn" << std::endl;
}
//thread를 던질 때 실제 함수도 같이 가야 실행된다
int main(){
    std::thread t1(fun);
    std::thread t2{std::move(t1)}; // move constructor
    t2.join();
}