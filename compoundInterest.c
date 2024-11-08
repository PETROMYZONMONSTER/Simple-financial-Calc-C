#include <math.h>
#include <stdio.h>

int compoundInt() {
    float value, rate, compound;
    int year;

    printf("You chose the compound interest option.\n");
    printf("This function will calculate the accumulated fees of taking a loan over a certain period of time.\n");

Reset:
    printf("Enter the initial amount of the loan, inputting 0 resets the program:\n");
    scanf("%f",&value);

  while (value > 0){
    printf("Enter the annual rate of the interest in percentage:\n");
    scanf("%f",&rate);
        rate = rate/100;

    printf("Enter the amount of years:\n");
    scanf("%d",&year);

    printf("Enter the compounded amount annually:\n");
    scanf("%f",&compound);

      if (rate <=0 || year <= 0 || compound <= 0) {
          printf("Invalid values, 0 or negative inputs aren't accepted.\n");
          goto Reset;
      }

    const float amount = value * pow((1 + rate/compound ),compound * year);
    const float interest = amount - value;

    printf("Your interest is: %.2f\n",interest);
    goto Reset;
    }
    return 0;
}
