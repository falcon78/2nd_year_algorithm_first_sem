#include <stdio.h>
#define NULLCHARSIZE 1
int main (void ){
    char x[] = "abc";
    int sizeOfX = sizeof(x)/sizeof(x[0]);
    printf("%d \n",sizeOfX - NULLCHARSIZE);
    return 0;
}