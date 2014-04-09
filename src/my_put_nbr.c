/*
** my_put_nbr.c for my_put_nbr in /home/vincen_o/rendu/Piscine-C-Jour_03
**
** Made by Arthur Vincent
** Login   <vincen_o@epitech.net>
**
** Started on  Wed Oct  2 15:18:41 2013 Arthur Vincent
** Last update Mon Oct 21 16:00:46 2013 Arthur Vincent
*/

void	my_putchar(char c);

int	my_put_nbr(int nb)
{
  int	stock;
  int	size;

  size = 1;
  if (nb < 0)
    {
      my_putchar('-');
      nb = -nb;
    }
  stock = nb;
  while (stock / 10 > 0)
    {
      size = size * 10;
      stock = stock / 10;
    }
  while (size > 0)
    {
      my_putchar('0' + (nb / size));
      nb = nb % size;
      size = size / 10;
    }
  return (0);
}
