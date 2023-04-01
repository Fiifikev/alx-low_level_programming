#include <stdio.h>


void __attribute__ ((constructor)) beforemain(void);
/**
 * beforemain -execute before main
 */
void beforemain(void)
{
printf(
"You're beat! and yet, you must allow,\n bore my house upon my back!\n");
}
