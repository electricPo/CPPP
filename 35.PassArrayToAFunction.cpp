#include <iostream>

///////////////////////declaration///////////////////
double getTotal(double prices[], int size);

///////////////////////output///////////////////////
int main(){
    double prices[] = {29.99, 15.05, 75, 32.99};
    int size = sizeof(prices)/sizeof(double);
    //pass array to a function
    //함수를 호출 할 땐[]를 제외한다
    //함수를 호출시: function no longer know what the size of the Array is
    //그렇기 때문에: additional argument to let the function know what the size is
    double total = getTotal(prices, size);
    //변수는 같은 이름이어야 함
    std::cout << "$" << total <<'\n';    
    return 0;
}

///////////////////////definition///////////////////
double getTotal(double prices[], int size){
    double total = 0;

    for(int i = 0; i < size; i++){
        total+= prices[i];
    }
    return total;
}