/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 09:08:27 by rhohls            #+#    #+#             */
/*   Updated: 2018/08/21 09:42:45 by rhohls           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdarg.h>
#include <stdlib.h>

static void	do_print(int fd, va_list var_list, char *input, int index)
{
	char		*str;
	int			num;

	if (input[index] == 's')
	{
		str = va_arg(var_list, char *);
		ft_putstr_fd(str, fd);
	}
	else if (input[index] == 'i' || input[index] == 'd')
	{
		num = va_arg(var_list, int);
		ft_putnbr_fd(num, fd);
	}
}

int			ft_dprintf(int fd, char *input, ...)
{
	va_list	var_list;
	int		index;

	index = 0;
	va_start(var_list, input);
	while (input[index])
	{
		if (input[index] == '%')
		{
			index++;
			if (input[index] == 's' || input[index] == 'i'
			|| input[index] == 'd')
				do_print(fd, var_list, input, index);
			else
			{
				index--;
				ft_putchar_fd('%', fd);
			}
		}
		else
			ft_putchar_fd(input[index], fd);
		index++;
	}
	va_end(var_list);
	return (1);
}
