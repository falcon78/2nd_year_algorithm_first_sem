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
    URIAGE *up1;
    URIAGE *up2;
    URIAGE *up3;
    URIAGELIST *l0;
    URIAGELIST *l1;
    URIAGELIST *l2;
    URIAGELIST *l3;
    if((l0=newlist())==NULL){
        fprintf(stderr,"領域を確保できませんでした");
        return 2;
    }
    if((l1=newlist())==NULL){
        fprintf(stderr,"領域を確保できませんでした");
        free(l0);
        return 2;
    }
    if((l2=newlist())==NULL){
        fprintf(stderr,"領域を確保できませんでした");
        free(l1);
        free(l0);
        return 2;
    }
    if((l3=newlist())==NULL){
        fprintf(stderr,"領域を確保できませんでした");
        free(l2);
        free(l1);
        free(l0);
        return 2;
    }
    l1->next=l0;
    l1->uriage=&u1;
    l2->next=l1;
    l2->uriage=&u2;
    l3->next=l2;
    l3->uriage=&u3;
    printUriageList(l3);
    printf("-----\n");
    freeUriageList(l3,0);

    if((l0=newlist())==NULL){
        fprintf(stderr,"領域を確保できませんでした");
        return 2;
    }
    if((l1=newlist())==NULL){
        fprintf(stderr,"領域を確保できませんでした");
        free(l0);
        return 2;
    }
    if((l2=newlist())==NULL){
        fprintf(stderr,"領域を確保できませんでした");
        free(l1);
        free(l0);
        return 2;
    }
    if((l3=newlist())==NULL){
        fprintf(stderr,"領域を確保できませんでした");
        return 2;
    }
    if((up1=malloc(sizeof(URIAGE)))==NULL){
        fprintf(stderr,"領域を確保できませんでした");
        free(l2);
        free(l1);
        free(l0);
        return 2;
    }
    if((up2=malloc(sizeof(URIAGE)))==NULL){
        fprintf(stderr,"領域を確保できませんでした");
        free(l2);
        free(l1);
        free(l0);
        free(up1);
        return 2;
    }
    if((up3=malloc(sizeof(URIAGE)))==NULL){
        fprintf(stderr,"領域を確保できませんでした");
        free(l2);
        free(l1);
        free(l0);
        free(up2);
        free(up1);
        return 2;
    }
    *up1=u1;
    *up2=u2;
    *up3=u3;
    l1->next=l0;
    l1->uriage=up1;
    l2->next=l1;
    l2->uriage=up2;
    l3->next=l2;
    l3->uriage=up3;
    printUriageList(l3);
    printf("-----\n");
    freeUriageList(l3,1);
    return 0;
}
