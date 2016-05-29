/*
** check.c for  in /home/baptiste/rendu/game_pendu
**
** Made by
** Login   <baptiste@epitech.net>
**
** Started on  Sun May 29 18:01:54 2016
** Last update Sun May 29 18:02:02 2016 
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
