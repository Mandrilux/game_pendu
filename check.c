/*
** check.c for  in /home/baptiste/rendu/game_pendu
**
** Made by
** Login   <baptiste@epitech.net>
**
** Started on  Sun May 29 18:01:54 2016
** Last update Thu Jun  2 20:45:18 2016 
*/

#include "my.h"

int     count_tab(char **tab)
{
  int   i = -1;

  if (tab == NULL)
    return (0);
  while (tab[++i] != NULL);
  return (i);
}

int	is_end(char *str)
{
  int	i = -1;

  while (str[++i] != '\0')
    {
      if (str[i] == '_')
	return (0);
    }
  return (1);
}

int	check_word(char *mystere, char *search, char c)
{
  int	i = -1;
  int	flag = 0;

  while (mystere[++i] != '\0')
    {
      if (mystere[i] == c)
	{
	  search[i] = c;
	  flag++;
	}
    }
  return (flag);
}
