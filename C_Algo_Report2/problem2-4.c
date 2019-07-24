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
    URIAGE* u[]={&u1,&u2,&u3,NULL};
    URIAGE **p;
    URIAGELIST *l;
    URIAGELIST *m;
    if((l=newlist())==NULL){
        fprintf(stderr,"領域を確保できませんでした");
        return 2;
    }
    for(p=u;*p!=NULL;p++){
        if((m=add(l,*p))==NULL){
            fprintf(stderr,"領域を確保できませんでした");
            freeUriageList(l,0);
            return 2;
        }
        printf("追加%s\n", m->uriage==*p?"Ok":"NG");
        printUriageList(l);
        printf("-----\n");
    }
    freeUriageList(l,0);
    return 0;
}
