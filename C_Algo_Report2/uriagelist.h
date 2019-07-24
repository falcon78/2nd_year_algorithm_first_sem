//
// Created by falcon on 19/07/24.
//

#ifndef C_ALGO_REPORT2_URIAGELIST_H
#define C_ALGO_REPORT2_URIAGELIST_H

#endif //C_ALGO_REPORT2_URIAGELIST_H


typedef struct uriagelist {
    struct uriagelist* next;
    URIAGE *uriage;
} URIAGELIST;

void printUriageList(URIAGELIST* l);
URIAGELIST* newlist(void);
void freeUriageList (URIAGELIST *l , int purge);
URIAGELIST* add(URIAGELIST* l, URIAGE* u);