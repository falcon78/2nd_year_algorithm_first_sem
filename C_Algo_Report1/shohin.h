//
// Created by sujan on 2019/06/08.
//

#ifndef C_ALGO_REPORT1_SHOHIN_H
#define C_ALGO_REPORT1_SHOHIN_H

#endif //C_ALGO_REPORT1_SHOHIN_H


#define ZEI (1.08)
typedef struct{
    char* name;
    int tanka;
    int sotozei;
} SHOHIN;
extern SHOHIN shohin[];
void printshohin(SHOHIN s);
