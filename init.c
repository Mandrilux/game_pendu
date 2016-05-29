/*
** init.c for  in /home/baptiste/rendu/game_pendu
**
** Made by
** Login   <baptiste@epitech.net>
**
** Started on  Sun May 29 17:50:12 2016
** Last update Sun May 29 17:57:37 2016 
*/

#include "my.h"

char	*init_word()
{
  FILE *file = NULL;
  char	**tab_word = NULL;

  if ((file = fopen("word.txt", "r+")) == NULL)
    {
      printf("Erreur d'ouverture du fichier\n");
      exit(EXIT_FAILURE);
    }
}
