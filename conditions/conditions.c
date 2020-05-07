#include <cs50.h>
#include <stdio.h>

int main(void)
{
  int x = get_int("What's the value of x\n");
  int y = get_int("What's the value of y\n");

  if (x < y)
  {
    printf("x is smaller than y\n");
  }
  else if (x > y)
  {
    printf("y is smaller than x\n");
  }
  else
  {
    printf("x is equal to y\n");
  }
}