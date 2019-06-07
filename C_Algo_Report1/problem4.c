//
// Created by sujan on 2019/06/08.
//

#include <stdio.h>
#include "shohin.h"
#include "uriage.h"
int main(void){
    URIAGE uriage0[]={{2,1},{1,6},{-1}};
    URIAGE uriage1[]={{0,3},{1,2},{2,1},{-1}};
    URIAGE uriage2[]={{3,1},{-1}};
    URIAGE uriage3[]={{1,3},{0,1},{-1}};
    URIAGE uriage4[]={{1,3},{0,1},{3,2},{-1}};
    URIAGE* uriage[]={uriage0, uriage1, uriage2, uriage3, uriage4, NULL};
    int total;
    total=printUriageTrans(uriage);
    printf("%d\n",total);
    return 0;
}