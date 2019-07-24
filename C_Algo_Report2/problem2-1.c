//
// Created by falcon on 19/07/24.
//

#include <stdio.h>
#include <stdlib.h>
#include "shohin.h"
#include "uriage.h"
#include "uriagelist.h"
int main(void){
    URIAGE u1={1,2};
    URIAGE u2={2,3};
    URIAGE u3={3,4};
    URIAGELIST l0={NULL};
    URIAGELIST l1={&l0,&u1};
    URIAGELIST l2={&l1,&u2};
    URIAGELIST l3={&l2,&u3};
    printf("-----\n");
    printUriageList(&l0);
    printf("-----\n");
    printUriageList(&l1);
    printf("-----\n");
    printUriageList(&l2);
    printf("-----\n");
    printUriageList(&l3);
    return 0;
}