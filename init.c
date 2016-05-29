/*
1;2802;0c** init.c for  in /home/baptiste/rendu/game_pendu
**
** Made by
** Login   <baptiste@epitech.net>
**
** Started on  Sun May 29 17:50:12 2016
** Last update Sun May 29 18:42:01 2016 
*/

#include "my.h"

char	*init_word()
{
  int	fd;
  char	**tab_word = NULL;
  char	*line;


  if ((fd = open("word.txt", O_RDONLY)) == -1)
    {
      printf("Erreur d'ouverture du fichier\n");
      exit(EXIT_FAILURE);
    }
  while ((line = get_next_line(fd)) != NULL)
    {
      if ((tab_word = alloc(tab_word, line)) == NULL)
  	return (NULL);
    }
  srand(time(NULL));
  /* return (tab_word[1]); */
  /* return (tab_word[rand % (count_tab(tab_word) - 1)]); */
}
