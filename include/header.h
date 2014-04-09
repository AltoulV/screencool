/*
** header.h for screen in /home/vincen_o/rendu/screensyle
**
** Made by Arthur Vincent
** Login   <vincen_o@epitech.net>
**
** Started on  Mon Apr  7 14:43:58 2014 Arthur Vincent
** Last update Mon Apr  7 15:49:31 2014 Arthur Vincent
*/

#ifndef		HEADER_H_
# define	HEADER_H_

# include	<sys/ioctl.h>
# include	<unistd.h>
# include	<termios.h>
# include	<term.h>
# include	<ncurses.h>
# include	<stdlib.h>
# include	<sys/types.h>
# include	<sys/stat.h>
# include	<fcntl.h>
# include	<signal.h>

# define CYCLE 40000
# define TIME_MS 0

int		fct_aff_tputs(int);

#endif
