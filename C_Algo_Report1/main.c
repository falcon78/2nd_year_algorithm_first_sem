#include <stdio.h>
#include "shohin.h"
int main(void){
    for(int i=0;shohin[i].tanka!=0; i++){
        printf("商品コード %d 品名 ",i);
        printshohin(shohin[i]);
        printf("\n");
    }
    return 0;
}