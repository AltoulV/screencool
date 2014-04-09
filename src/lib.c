/*
** lib.c for screen in /home/vincen_o/rendu/screensyle
**
** Made by Arthur Vincent
** Login   <vincen_o@epitech.net>
**
** Started on  Mon Apr  7 14:37:51 2014 Arthur Vincent
** Last update Mon Apr  7 15:29:13 2014 Arthur Vincent
*/

#include		"header.h"

void			my_putchar(char c)
{
  write(1, &c, 1);
}

int			fct_aff_tputs(int c)
{
  my_putchar(c);
}

void			my_putstr(char *str)
{
  int			i;

  i = 0;
  while (str[i] != 0)
    {
      my_putchar(str[i]);
      i++;
    }
}

void			my_tgetstr(char *arg)
{
  char			*str;

  if ((str = tgetstr(arg, NULL)) == NULL)
    {
      my_putstr("[ERROR]: tgetstr fail.\n");
      exit(1);
    }
  tputs(str, 1, fct_aff_tputs);
}
