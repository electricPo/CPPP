#include <stdio.h>
#include <math.h>
#include <stdlib.h>
//declaration
void A()
{
    printf("Hello");
}
void B( void (*ptr)()) //function pointer as argument
{
    ptr(); //call-back function that "ptr" points to
}
int compare(int a, int b)
{
    if(a>b) return 1;
    else return -1;
}
//절대값 비교
int absolute_compare(int a, int b)
{
    if(abs(a) > abs(b)) return 1;
    return -1;
}

int qcompare(const void* a, const void* b)
//void pointers are generic pointers
//const void* a : 어떤 데이터 타입이든 가리킬 수 있는 포인터
//we can typecast them a pointer of any data type
{
    int A = *((int*)a); //typecasting to int* and getting value
    //*((int*)a)는 a가 가리키는 메모리 주소에서 정수 값을 가져오는 것
    int B = *((int*)b);
    return B-A;
}
//int absolute_compare 
//callback function should compare two integers, should return 1 if first element has higer rank,
//0 if elements are equal and -1 if second element has higher rank
void BubbleSort(int *A, int n, int (*compare)(int, int))
{
    //simple bubble sort
    int i,j,temp;
    for(i=0; i<n; i++)
        for(j=0; j<n-1; j++){
            //i want to sort my list in decreasing order of the value of integers
            if(compare(A[j], A[j+1]) > 0){ //compare A[j] with A[j+1] and SWAP if needed
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
}

//output
int main()
{
    // void (*p)() = A;
    // B(p);
    B(A); // A is callback function

    int i, A[] = {-31,22,-1,50,-6,4};
    BubbleSort(A, 6, absolute_compare);
    for(i=0; i<6; i++)
    printf("%d ", A[i]);
    
    //quick sort: it can be any array(integer, char, structure)
    qsort(A, 6, sizeof(int), qcompare);
    for(i=0; i<6; i++)
    printf("%d ", A[i]);
    
}