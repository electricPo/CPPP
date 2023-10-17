#include <stdio.h>

int main(){
    int a;
    int *p;
    a = 10;
    p = &a; //&a = address of a
    int b = 20;

    printf("%d\n" ,p);
    printf("%d\n" ,*p); // *p- value at address pointed by p //10
    printf(" a = %d\n" ,a);
    *p = 12; // dereferencing
    printf(" a = %d\n" ,a);

    *p = b; //will the address in p change to point b?
    printf("Address of p is %d\n" ,p); //the pointer points to 'a'
    printf("value at p is %d\n" ,*p);

    //pointer arithmetic
    printf("Address p is %d\n" ,p);
    printf("size of integer is %d bytes\n" ,sizeof(int));
    printf("value at p is %d\n" ,p+1);
    

    char c = 'a';
    char *p1 = &c;

    printf("Address p1 is %d\n" ,p1);
    printf("size of integer is %d char\n" ,sizeof(char));
    printf("value at p1 is %d\n" ,p1+1);

    double d = 0.1234;
    double *p2 = &d;
    printf("Address p2 is %d\n" ,p2);
    printf("size of integer is %d double\n" ,sizeof(double));
    printf("value at p2 is %d\n" ,p2+1);
}