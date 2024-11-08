#include <stdio.h>
#include "simpleInterest.c"
#include "compoundInterest.c"
#include "installments.c"
#include "savings.c"

void main(void) {
    void(*f[4])(int) = {simpleInt, compoundInt, installment, saving};
Menu:
    printf("Financial calculator program:\n");
    printf("0. Simple interest\n");
    printf("1. Compound interest\n");
    printf("2. Installments\n");
    printf("3. Savings\n");
    printf("4. Exit\n");
    int option = 0;
    scanf("%d",&option);

    while (option <= 3) {
        (*f[option])(option);
        goto Menu;
    }
    puts("Program terminated.\n");

}