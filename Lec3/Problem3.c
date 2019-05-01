#include <stdio.h>
#define NULLCHARSIZE 1
int main (void){
    char x[]="This is a pin.";
    int sizeOfX = sizeof(x)/sizeof(x[0]);
    for (int i = 0 ; i<sizeOfX;i++){
        if (x[i] >= 'a' && x[i] <= 'z'){
            x[i] = x[i]-'a'+'A';
        }
    }
    printf("%s \n",x);
    return 0;
}