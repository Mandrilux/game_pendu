/*
** str.c for  in /home/baptiste/rendu/game_pendu
**
** Made by
** Login   <baptiste@epitech.net>
**
** Started on  Sun May 29 18:00:57 2016
** Last update Thu Jun  2 21:00:25 2016 
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
      tmp[0] = name;
      tmp[1] = NULL;
    }
  else
    {
      if ((tmp = malloc(sizeof(char *) *
			(count_tab(re_write) + 2))) == NULL)
	return (NULL);
      while (re_write[++i] != NULL)
	tmp[i] = re_write[i];
      tmp[i] = name;
      tmp[i + 1] = NULL;
    }
  return (tmp);
}

int	save_score(int tour, char *str)
{
  FILE* score = NULL;
  char	*name;

  printf("\nEntrez un nom ! \n");
  if ((name = get_next_line(0)) == NULL)
    return (-1);
  score = fopen("score.txt", "w");
  if (score != NULL)
    {
      fprintf(score, "[%s] trouvé en %d tour par %s", str, tour, name);
      fclose(score);
    }
  return (1);
}
