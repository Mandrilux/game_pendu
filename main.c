/*
** main.c for in /home/baptiste/rendu/game_pendu
**
** Made by
** Login   <baptiste@epitech.net>
**
** Started on  Sun May 29 17:48:59 2016
** Last update Thu Jun  2 20:24:54 2016 
*/

#include "my.h"

int		main()
{
  char	*word;
  char	*search;
  char  *c;
  int	end;

  end = 10;
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
  while (is_end(search) == 0 && end != 0)
    {
      printf("Le mot découvert est : %s\n", search);
      if ((c = get_next_line(0)) == NULL)
	return (EXIT_FAILURE);
      if (c[0] != '\0')
	check_word(word, search, c[0]);
      end--;
      display_scoring(end);
      free(c);
    }
  return (display_end(end, word));
}

int	display_end(int	end, char *word)
{
  if (end == 0)
    printf("Vous avez perdu ! ");
  else
    printf("Bravo vous avez gagné ! ");
  printf("Le mot mystere etais %s.\n",word);
  return (EXIT_SUCCESS);
}

void	display_scoring(int end)
{
  if (end != 0)
    {
      if (end == 1)
	printf("il vous reste 1 essai\n");
      else
	printf("Il vous reste %d essais\n", end);
    }
}
