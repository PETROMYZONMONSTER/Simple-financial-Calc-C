#include <stdio.h>

int saving() {
    float value, rate, contribution;
    int year;

    printf("You chose the savings option.\n");
    printf("This function will calculate how much you'll receive from rates after investing a certain value.\n");

Reset:
    printf("Enter the initial amount of the deposit, inputting 0 resets the program:\n");
    scanf("%f",&value);

    while (value > 0){
        printf("Enter the annual contribution:\n");
        scanf("%f",&contribution);

        printf("Enter the rate of return:\n");
        scanf("%f",&rate);

        printf("Enter the amount of years for the balance to grow:\n");
        scanf("%d",&year);

        if (contribution <= 0 || rate <=0 || year <= 0) {
            printf("Invalid values, 0 or negative inputs aren't accepted.\n");
            goto Reset;
        }

        const float interest = value * (rate / 100);
        value += interest + contribution;

        printf("Your interest earned for the year is: %.2f\n",interest);
        printf("Your final balance will be: %.2f\n",value);
        goto Reset;
    }
    return 0;
}
