#include<stdio.h>

/**
 * feelMylifeFun - Apply the constructor attribute to feelMylifeFun() so that it is executed before main()
 *
 */

void feelMylifeFun(void) __attribute__ ((constructor));

/**
 * feelMylifeFun - I feelMylifeFun of implement
 */

void feelMylifeFun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
