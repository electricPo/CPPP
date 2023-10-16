#include <stdio.h>

//function declaration
int Add(int a, int b)
{
    return a+b;
}
void PrintHello(char *name)
{
    printf("Hello %s\n", name);
}

//output
int main()
{
    int c;
    //pointer to function that should take (int, int) as argument / parameter and return int
    //(*identificial name) of the pointer within this parentheses
    int (*p)(int, int);

    //fill in the address of a function
    //p = &Add;
    //so, 'p' now pointers to Add
    //and using 'p' we can execute this function Add

    p = Add; //function name will return us pointer
    
    //used the asterisk operator(*) to dereference and get the function
    //c = (*p)(2,3);

    //dereferencing and executing the function
    c = p(2,3);

    printf("%d", c); // 5

    //we just used a function pointer to refer to a function

    void (*ptr)(char*);
    ptr = PrintHello;
    ptr("Joy");

}