#include <math.h>
#include <stdio.h>

int installment() {
    float value, rate;
    int month;

    printf("You chose the installments option.\n");
    printf("This function will calculate the amount of money you'll have to pay per month to fully pay off a certain loan.\n");

Reset:
    printf("Enter the initial amount of the loan, inputting 0 resets the program:\n");
    scanf("%f",&value);

  while (value > 0){
    printf("Enter the rate of the interest:\n");
    scanf("%f",&rate);

    printf("Enter the term in months:\n");
    scanf("%d",&month);

      if (rate <=0 || month <= 0) {
          printf("Invalid values, 0 or negative inputs aren't accepted.\n");
          goto Reset;
      }

    const float interest = pow(1+rate,month);
    const float payment = (value * interest * rate)/(interest - 1);

    printf("The monthly payment amount will be: %.2f\n",payment);
    goto Reset;
    }
    return 0;
}
