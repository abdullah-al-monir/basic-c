#include <stdio.h>

int main()
{
  // int age;
  // printf("Write your age here: ");
  // scanf("%d", &age);
  // if (age < 18)
  // {
  //   printf("You are a kid.");
  //   return 0;
  // }
  // else
  // {
  //   printf("You are an adult.");
  //   return 0;
  // }

  // float weight;
  // printf("Write your weight here: ");
  // scanf("%f", &weight);
  // if (weight < 70)
  // {
  //   printf("You are underweight.");
  //   return 0;
  // }
  // else if (weight >= 70 && weight < 80)
  // {
  //   printf("You are normal weight.");
  //   return 0;
  // }

  char name[30];

  printf("Write your full name here: ");
  fgets(name, sizeof(name), stdin);

  printf("Hello, %s", name);

  return 0;
}