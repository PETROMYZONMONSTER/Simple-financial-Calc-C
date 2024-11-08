#include <stdio.h>

int simpleInt(){
    float value, rate;
    int days;

    printf("You chose the simple interest option.\n");
    printf("This function will calculate the cost of the fee that comes with taking a loan.\n");

Reset:
    printf("Enter the initial amount of the loan, inputting 0 resets the program:\n");
    scanf("%f",&value);

  while (value > 0){
    const int year = 365;
    printf("Enter the rate of the interest:\n");
    scanf("%f",&rate);

    printf("Enter the amount of the days of the loan:\n");
    scanf("%d",&days);

    const float interest = (value * rate * days) / year;

    printf("Your interest is: %.2f\n",interest);
    goto Reset;
  }
  return 0;
}
