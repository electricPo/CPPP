#include <iostream>
#include <limits>

using namespace std;
//how to clear the input buffer in c++

int main(){

    int number = 0;

    //5\n
    cout << "number: ";
    cin >> number;
    
    //ignore up to this amaount of characters
    //numeric_limits<streamsize>::max() :   give us the maximum number of chcracters
    //                                      that can be on the input buffer
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    //we'll store it into this character array
    char line[256];
    cout << "line: ";
    //getline function is going to store
    //whatever characters the user enters
    cin.getline (line, 256);

    //we've done this let's output the number and the line
    cout << endl;
    cout << "number: " << number << endl;
    cout << "line: " << line << endl;

    return 0;
}