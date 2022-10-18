#include "_putchar.h"
/**
 * main- program entry
 * return- 0 always successful
 */
int main(void)
{
char *ft="_putchar";
while(*ft)
{
	_putchar(*ft);
	*ft++;
}
putchar('\n');
return (0);
}
