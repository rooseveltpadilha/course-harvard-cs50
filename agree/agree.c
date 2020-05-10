#include <cs50.h>
#include <stdio.h>

int main(void)
{
  char c = get_char("Do you agree?\n");

  if (c == 'y' || c == 'Y')
  {
    printf("Agreed.\n");
  }
  else if (c == 'n' || c == 'N')
  {
    printf("Not agreed.\n");
  }
  else
  {
    printf("Type Y/y to agree or N/n to not agree.\n");
  }
}