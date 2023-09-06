#include <iostream>



namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}
int main(){

    //Namespace = provides a solution for preventing name conflicts
    //              in large projects. Each entity needs a unique name.
    //              A namespace allows for identically named entities
    //              as long as the namespaces are differents.

    //entity는 다른 namespace에서 같은 이름을 가질 수 있다
    //using namespace를 사용함으로서 prefix를 제외 할 수 있다

    //using 선언
    //using 네임스페이스이름::요소;

    using namespace first;

    // int x = 0;
    // std::cout << x; //0

    std::cout << x; //1 prefix the namespace
    std::cout << second::x; //2 :: -> scope resolution operator
    
    // using namespace std;
    using std::cout;
    using std::string;

    // std::string name ="Joy";
    // std::cout << "Hello" << name;

    string name ="Joy";
    cout << "Hello" << name;

    

    return 0;
}