//
// Created by sujan on 2019/06/08.
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
            tax == 1 ? (item_price * total_sales) * ZEI : item_price * total_sales;
    printf("%s\t 単価%d円(%s)\t%d 個\t%d円 \n", product_name, item_price,
           tax == 1 ? "外税" : "内税", total_sales, total_price);
    return total_price;
}

int printUriageArray(URIAGE u[]) {
    int shokei = 0;
    for (int i = 0; u[i].code != -1; i++) {
        char *const product_name = shohin[u[i].code].name;
        const int item_price = shohin[u[i].code].tanka;
        const int tax = shohin[u[i].code].sotozei;
        const int total_sales = u[i].num;
        const int total_price =
                tax == 1 ? (item_price * total_sales) * ZEI : item_price * total_sales;
        printf("%s\t 単価%d円(%s)\t%d 個\t%d円 \n", product_name, item_price,
               tax == 1 ? "外税" : "内税", total_sales, total_price);
        shokei += total_price;
    }
    return shokei;
}

int printUriageTrans(URIAGE **u) {
    int total = 0;
    for (int i = 0; u[i] != NULL; i++) {
        int sub_total = 0;
        for (int j = 0; u[i][j].code != -1; j++) {
            //printf("%d %d" , u[i][j].code, u[i][j].num);
            char *const product_name = shohin[u[i][j].code].name;
            const int item_price = shohin[u[i][j].code].tanka;
            const int tax = shohin[u[i][j].code].sotozei;
            const int total_sales = u[i][j].num;
            const int total_price =
                    tax == 1 ? (item_price * total_sales) * ZEI : item_price * total_sales;
            printf("%s\t 単価%d円(%s)\t%d 個\t%d円 \n", product_name, item_price,
                   tax == 1 ? "外税" : "内税", total_sales, total_price);
            sub_total += total_price;
        }
        total += sub_total;
        printf("小計:\t\t\t\t\t%d円\n",sub_total);
        printf("------------------------------------\n");
    }
    printf("合計:\t\t%d円\n",total);
    return total;
}