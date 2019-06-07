//
// Created by sujan on 2019/06/08.
//

#include <stdio.h>
#include "shohin.h"
#include "uriage.h"
int main(void){
    URIAGE u1={0,3};
    URIAGE u2={3,4};
    int shokei;
    shokei = printUriage(&u1);
    printf("\t%d\n",shokei);
    shokei = printUriage(&u2);
    printf("\t%d\n",shokei);
    return 0;
}

