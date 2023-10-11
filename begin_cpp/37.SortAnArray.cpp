#include <iostream> //cin cout
#include <string> //string
//use a standard bubble sort
//버블정렬


///////////////////////declaration//////////////////
void sort(int array[], int size);

///////////////////////output///////////////////////
int main(){
    int array[] = {10, 1, 9, 2, 8, 3, 7, 4, 6, 5};
    int size = sizeof(array)/sizeof(array[0]);

    sort(array, size);

    //unsorted
    for(int element : array){
        std::cout << element << " ";
    }
    return 0;
}

///////////////////////definition//////////////////
void sort(int array[], int size){
    //we'll need the help of a temporary variable to swap some values
    int temp;
    //nested for loop:
    //-1 : need to compare the last element to anything the larger values
    //      will naturally gravitate
    //마지막 요소를 더 큰 값이 자연스럽게 배열의 끝 쪽으로 끌리는 요소와 비교
    for(int i = 0; i < size-1; i++){
        for(int j = 0; j < size -i -1; j++){
            //use if statement to check to see
            //if the current element that we're on array at index of j
            //is greater than the element on the right
            //if문을 사용해 j인덱스 배열에 있는 현재요소가 오른쪽 요소보다 큰지 확인
            if(array [j] > array [j + 1]){
                //if the element on the left is larger than the element on the right
                //we just have to swap those two values
                //왼쪽 요소가 오른쪽 요소보다 크면 해당 두 값을 교환
                temp = array[j];
                array [j] = array [j + 1];
                array [j + 1] = temp;
            }

        }
    }

}