//
// Created by falcon on 19/07/24.
//

#include <stdio.h>
#include "uriage.h"
#include "shohin.h"

int printUriage(URIAGE *p) {

    char *const product_name = shohin[p->code].name;
    const int item_price = shohin[p->code].tanka;
    const int tax = shohin[p->code].sotozei;
    const int total_sales = p->num;
    const int total_price =
            tax ? (item_price * total_sales) * ZEI : item_price * total_sales;
    printf("%s\t 単価%d円(%s)\t%d 個\t%d円 \n", product_name, item_price,
           tax ? "外税" : "内税", total_sales, total_price);
    return total_price;
}

int printUriageArray(URIAGE u[]) {
    int shokei = 0;
    for (int i = 0; u[i].code != -1; i++) {
        shokei += printUriage(&u[i]);
    }
    return shokei;
}

int printUriageTrans(URIAGE **u) {
    int sub_total = 0;
    int total = 0;
    for (int i = 0; u[i] != NULL; i++) {
        sub_total = printUriageArray(*(u + i));
        total += sub_total;
        printf("小計:\t\t\t\t\t%d円\n", sub_total);
        printf("------------------------------------\n");
    }
    printf("合計:\t\t%d円\n", total);
    return total;
}
