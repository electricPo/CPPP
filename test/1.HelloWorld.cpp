#include <iostream>
#include <string>

using namespace std;

//declaration

void str();

//output

int main(){

    str();

    return 0;
}

//definition

void str(){
    string str = "HelloWorld!";
    getline(cin, str); 

    if(str.length() >= 1 && str.length() <= 100000){
    cout << str <<endl;     
    }else{
        cout<<"문자열 길이를 벗어났습니다";
    }
   
}