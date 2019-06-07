//
// Created by sujan on 2019/06/08.
//

#include <stdio.h>
#include "uriage.h"
#include "shohin.h"


int main(void) {
    URIAGE u[] = {{0, 3},
                  {1, 2},
                  {2, 1},
                  {3, 4},
                  {-1}};
    int shokei;
    shokei = printUriageArray(u);
    printf("\t%d\n", shokei);
    return 0;
}
