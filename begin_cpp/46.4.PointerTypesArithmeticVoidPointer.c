#include <stdio.h>

int main(){
    int a = 1025;
    int *p;
    p = &a;
    printf("size of integer is %d bytes \n", sizeof(int));
    printf("address =  %d, value = %d\n",p ,*p);
    printf("address =  %d, value = %d\n",p+1 ,*(p+1)); //*(p+1) -> garbage value
    char *p0;
    //trying to store the address of 'p' in 'p0'
    p0 = (char*)p; //typecasting
    printf("size of integer is %d bytes \n", sizeof(char));
    printf("address =  %d, value = %d\n",p0 ,*p0); // 00000001
    printf("address =  %d, value = %d\n",p0+1 ,*(p0+1)); //00000100
    // if we write 1025 in binary using 32 bits
    // 1025 = 00000000 00000000 00000100 00000001
    // character is only one byte so i will look at only one byre to see the value

    //void pointer - Generic pointer
    void *p1;
    p1 = p;
    //generic pointer type is not mapped to a particular datatype
    //we can only print the address
    printf("address of generic value =  %d, value = %d\n",p1);
    
}