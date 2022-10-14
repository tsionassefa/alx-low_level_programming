#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Determine if a random number is positive, negative or zero.
(*
* return 0 on success
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
	printf("%d is %s", n, "posetive");
}
else if (n < 0)
{
	printf("%d is %s", n, "negative");
}
else
{
	printf("%d is %s", n, "zero");
}
return (0);
}
