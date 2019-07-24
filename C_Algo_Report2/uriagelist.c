//
// Created by falcon on 19/07/24.
//

#include <stdio.h>
#include <stdlib.h>
#include "uriage.h"
#include "shohin.h"
#include "uriagelist.h"


void printUriageList(URIAGELIST *l) {
    if (l->uriage == NULL) {
        return;
    }
    while (l->next != NULL) {
        printUriage(l->uriage);
        l = l->next;
    }
}

URIAGELIST *newlist(void) {
    URIAGELIST *newNode = malloc(sizeof(URIAGELIST));
    if (newNode == NULL) {
        return NULL;
    } else {
        newNode->next = NULL;
        newNode->uriage = NULL;
        return newNode;
    }
}

void freeUriageList(URIAGELIST *l, int purge) {
    while (l->next != NULL) {
        if (purge == 1) {
            free(l->uriage);
        }
        URIAGELIST *previous_l = l;
        l = l->next;
        free(previous_l);
    }
}

URIAGELIST* add (URIAGELIST* l, URIAGE *u){
    URIAGELIST *newNode = newlist();
    newNode->uriage = l->uriage;
    newNode->next = l->next;
    l->uriage = u;
    l -> next = newNode;
}