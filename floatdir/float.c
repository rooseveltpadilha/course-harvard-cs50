#include <cs50.h>
#include <stdio.h>

int main(void)
{
  int price = get_float("Wha's the price?\n");
  printf("Yout totla is %.2f\n", price * 1.0625);
}