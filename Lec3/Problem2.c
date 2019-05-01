#include <stdio.h>
#define NULLCHARSIZE 1
int main (void){
    int iCount = 0;
    char x[]="This is a pin.";
    int sizeOfX = sizeof(x)/sizeof(x[0]);
    for (int i = 0 ; i<sizeOfX;i++){
        if (x[i] == 'i'){
            iCount++;
        }
    }
    printf("%d \n",iCount);
    return 0;
}