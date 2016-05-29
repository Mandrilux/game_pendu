
#ifndef MY_H_
#define MY_H_

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

		/* check.c */

int		 count_tab(char **tab);

		/* init.c */

char		 *init_word();

		/* str.c */

char		 **alloc(char **re_write, char *name);

		/* main.c */

int		 main();

#endif /* MY_H_ */
