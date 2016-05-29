/*
** str.c for  in /home/baptiste/rendu/game_pendu
**
** Made by
** Login   <baptiste@epitech.net>
**
** Started on  Sun May 29 18:00:57 2016
** Last update Sun May 29 18:01:07 2016 
*/

#include "my.h"

char    **alloc(char **re_write, char *name)
{
  int   i;
  char  **tmp;

  i = -1;
  if (re_write == NULL)
    {
      if ((tmp = malloc(sizeof(char *) * 2)) == NULL)
	return (NULL);
      tmp[0] = strdup(name);
      tmp[1] = NULL;
    }
  else
    {
      if ((tmp = malloc(sizeof(char *) *
			(count_tab(re_write) + 2))) == NULL)
	return (NULL);
      while (re_write[++i] != NULL)
	tmp[i] = re_write[i];
      tmp[i] = strdup(name);
      tmp[i + 1] = NULL;
    }
  return (tmp);
}
