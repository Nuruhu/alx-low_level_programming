#include <stdio.h>

void __attribute__((constructor)) on_here(void);

/**
 * on_here - Prints a string before the
 *        main function is executed.
 */
void on_here(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
