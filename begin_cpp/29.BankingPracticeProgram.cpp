#include <iostream>
#include <iomanip> //set some precision for floating point numbers
/*
    Banking practice program
    1.deposit money
    2.withdraw money
    3.show a balance
*/
//*******************************declaration*****************************************
void showBalance(double balance); //현재 잔액
double deposit(); //입금
    //입금기능은 현재 잔액을 알 필요가 없기에 파라미터를 넘기지 않는다
    //함수호출 시 현재 잔액을 알 필요가 있을 때만 파라미터로 잔액 전달
double withdraw(double balance); //출금


//*******************************output*****************************************
int main(){
    double balance = 0;
    int choice = 0;

    do{
        std::cout << "********************Banking practice**************************" << '\n';
        std::cout << "Enter your choice" << '\n';
        std::cout << "1. show Balance" << '\n';
        std::cout << "2. deposit money" << '\n';
        std::cout << "3. withdraw money" << '\n';
        std::cout << "4. Exit" << '\n';
        std::cin >> choice;
        std::cout << "**************************************************************" << '\n';
        //clear the input buffer
        //사용자가 잘못된 데이터를 입력, 입력스트림이 오류에 빠졌을 때 정상상태로 복구
        std::cin.clear(); //c++에서 선호
        fflush(stdin); //c에서 선호
            switch (choice) {

            case 1: showBalance(balance);
                break;
            case 2: balance += deposit();
                    showBalance(balance);
                    //balance = balance + deposit();
                break;
            case 3: balance -= withdraw(balance);
                    showBalance(balance);
                break;
            case 4: std::cout << "Thanks for visiting!" << '\n';
                break;
            default: std::cout << "Invalid choice!" << '\n';
                break;
            }

    }while (choice != 4);

    
   
    return 0;
}

//*******************************definition*****************************************

//receiving balance as an argument
void showBalance(double balance){
        std::cout << "Your balance is: $" << std::setprecision(2) << std::fixed << balance <<'\n';
        // << std::setprecision(2) << std::fixed
        // this will display our balance up to two decimal places after the decimal point! -> $123.00
}
double deposit(){

    double amount = 0;

    std::cout << "Enter amount to be deposited: ";
    std::cin >> amount;

    //prevent negative numbers
    if(amount > 0){
        return amount;
    }else {
        std::cout << "That's not a valid amount!" <<'\n';
        return 0;
    }
    return amount;
}
double withdraw(double balance){

    double amount = 0;

    std::cout << "Enter amount to be withdrawn: ";
    std::cin >> amount;
    if(amount > balance){
        std::cout << "insefficient funds" << '\n';
        return 0;
    }else if(amount < 0){
        std::cout << "That's not a valid amount" << '\n';
        return 0;
    }else{
        return amount;
    }
}