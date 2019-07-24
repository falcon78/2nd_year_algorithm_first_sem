//
// Created by falcon on 19/07/24.
//

#include <stdio.h>
#include "shohin.h"

SHOHIN shohin[] = {{"Apple",  150},
                   {"Orange", 100},
                   {"Banana", 200},
                   {"Book1",  500, 1},
                   {"",       0}};

void printshohin(SHOHIN s) {
    printf("%s\t単価%d円(%s)", s.name, s.tanka, s.sotozei ? "外税" : "内税");
}