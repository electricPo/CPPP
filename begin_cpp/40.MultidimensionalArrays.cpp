#include <iostream>
//Multi-dimensional Array = 2d array ={array1, array2, array3}
int main(){
    //[number of rows], [numger of columns]
    std::string cars[][3] = {{"Mustang", "Escape", "F-150"},
                            {"corvette", "Equinox", "Silverado"},
                            {"Challenger", "Durango", "Ram 1500"}};
    //need to select the row numger
    // std::cout << cars[0][0] << " ";
    // std::cout << cars[0][1] << " ";
    // std::cout << cars[0][2] << '\n';
    // std::cout << cars[1][0] << " ";
    // std::cout << cars[1][1] << " ";
    // std::cout << cars[1][2] << '\n';
    // std::cout << cars[2][0] << " ";
    // std::cout << cars[2][1] << " ";
    // std::cout << cars[2][2] << '\n';

    //iterate over a two dimensional array
    int rows = sizeof(cars)/sizeof(cars[0]);
    int cols = sizeof(cars[0])/sizeof(cars[0][0]);

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            std::cout << cars[i][j] << ' ';
            //cars[i][j]: 현재 행과 열에 해당하는 자동차 브랜드 이름을 가져온다
        }
        std::cout << '\n';
    }

    return 0;
}