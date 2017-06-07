#include <stdio.h>

/* Initialise variables. Note that c is not less than d,
  which is one of the conditions to test for. */
/* Therefore, the entire expression should evaluate as false. */

int a = 5, b = 6, c = 5, d = 1;
int x;

int main(void){

  /* Evaluate the expression without parenthesis */

  x = a < b || a < c && c < d;
  printf("\nWithout parenthesis the expression evaluates as %d\n", x);

  /* Evaluate the expression with parenthesis */

  x = (a < b || a < c) && c < d;
  printf("With parenthesis the expression evaluates as %d\n", x);

  return 0;

}
