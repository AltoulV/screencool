/*
** main.c for screen in /home/vincen_o/rendu/screensyle
**
** Made by Arthur Vincent
** Login   <vincen_o@epitech.net>
**
** Started on  Mon Apr  7 14:37:03 2014 Arthur Vincent
** Last update Mon Apr  7 15:49:48 2014 Arthur Vincent
*/

#include		"header.h"

void			init_pgr(struct termios *t)
{
  int			nb;

  if (tcgetattr(0, t) == -1)
    {
      my_putstr("[ERROR]: tcgetattr fail.\n");
      exit(1);
    }
  if ((nb = tgetent(NULL, "xterm")) != 1)
    {
      my_putstr("[ERROR]: tgetent fail.\n");
      exit(1);
    }
}

void			remplissage()
{
  int			x;
  int			y;
  int			nb;
  char			*str;
  int			i;

  i = 0;
  while (i < CYCLE)
    {
      x = rand() % 210;
      y = rand() % 71;
      nb = rand() % 9;
      str = tgetstr("cm", NULL);
      str = tgoto(str, x, y);
      tputs(str, 1, fct_aff_tputs);
      if (nb == 4 || nb == 2)
	my_put_nbr(nb);
      else if (nb == 0 || nb == 1)
	my_putchar('-');
      else if (nb == 3 || nb == 5)
	my_putchar('_');
      else if (nb == 6 || nb == 7)
	my_putchar('|');
      else
	my_putchar('o');
      usleep(TIME_MS);
      i++;
    }
}

void			vide()
{
  int			x;
  int			y;
  char			*str;
  int			i;

  i = 0;
  while (i < CYCLE)
    {
      x = rand() % 210;
      y = rand() % 71;
      str = tgetstr("cm", NULL);
      str = tgoto(str, x, y);
      tputs(str, 1, fct_aff_tputs);
      my_putstr("  ");
      usleep(TIME_MS);
      i++;
    }
}

int			main(int argc, char **argv)
{
  struct termios	t;

  init_pgr(&t);
  t.c_lflag &= ~ECHO;
  my_tgetstr("cl");
  while (42)
    {
      remplissage();
      vide();
    }
  return (0);
}
