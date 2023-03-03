#include <stdio.h>

int main(void) /* function return a null or print a[2] = 98 */
{
int n;
int a[5];
int *p;

a[2] = 1024;
p = &n;
  /*
   * int main(void) - this return a null value or prints a[2] = 98
   * Remember:
   * - you are not allowed to use a
   * - you are not allowed to modify p
   * - only one statement
   * - you are not allowed to code anything else than this line of code
   */
*(p + 5) = 98;
/* ...so that this prints 98\n */
printf("a[2] = %d\n", a[2]);
return (0);
}
