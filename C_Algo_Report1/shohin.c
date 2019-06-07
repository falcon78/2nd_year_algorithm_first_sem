//
// Created by sujan on 2019/06/08.
//
#define N 3

#include <stdio.h>
#include "shohin.h"

SHOHIN shohin[] = {{"Apple",  150},
                   {"Orange", 100},
                   {"Banana", 200},
                   {"Book1",  500, 1},
                   {"",       0}};

void printshohin(SHOHIN s) {
    printf("%s\t単価%d円(%s)", s.name, s.tanka, s.sotozei == 1 ? "外税" : "内税");
}