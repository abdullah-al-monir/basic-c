#include <stdio.h>

int main()
{
  int a = 25, b = 5;

  int sum = a + b;
  printf("Sum of %d and %d is %d\n", a, b, sum);

  int substraction = a - b;
  printf("Subtraction of %d and %d is %d\n", a, b, substraction);

  int multiplication = a * b;
  printf("Multiplication of %d and %d is %d\n", a, b, multiplication);

  int division = a / b;
  printf("Division of %d and %d is %d\n", a, b, division);

  int modulus = a % b;
  printf("Modulus of %d and %d is %d\n", a, b, modulus);
  return 0;
}