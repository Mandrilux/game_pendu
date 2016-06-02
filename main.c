/*
1;2802;0c** main.c for in /home/baptiste/rendu/game_pendu
**
** Made by
** Login   <baptiste@epitech.net>
**
** Started on  Sun May 29 17:48:59 2016
** Last update Thu Jun  2 20:13:39 2016 
*/

#include "my.h"

int		main()
{
  char	*word;
  char	*search;
  char  *c;

  if ((word = init_word()) == NULL)
    {
      printf("Erreur lors de l'initialisation du programme");
      return (EXIT_FAILURE);
    }
  if ((search = word_search(word)) == NULL)
    {
      printf("Erreur lors de l'initialisation du programme");
      return (EXIT_FAILURE);
    }
  while (is_end(search) == 0)
    {
      printf("Le mot découvert est : %s\n", search);
      if ((c = get_next_line(0)) == NULL)
	return (EXIT_FAILURE);
      if (c[0] != '\0')
	check_word(word, search, c[0]);
    }
  printf("Bravo le mot mystere etait %s\n", word);
  return (EXIT_SUCCESS);
}
