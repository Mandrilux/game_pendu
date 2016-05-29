/*
** my.h for  in /home/baptiste/project/clean_project
**
** Made by
** Login   <baptiste@epitech.net>
**
** Started on  Wed May 18 12:49:26 2016
** Last update Sun May 29 18:42:32 2016 
*/

#ifndef MY_H_
#define MY_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include "get_next_line.h"

		/* check.c */

int		 count_tab(char **tab);
int		 is_end(char *str);
int		 check_word(char *mystere, char *search, char c);

		/* init.c */

char		 *init_word();
char		 *word_search(char *word);

		/* str.c */

char		 **alloc(char **re_write, char *name);

		/* get_line.c */

int		 my_memset_len(char *s, char c, int size, int flag);

		/* main.c */

int		 main();

#endif /* MY_H_ */
