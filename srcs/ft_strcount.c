/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcount.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 14:34:07 by rhohls            #+#    #+#             */
/*   Updated: 2018/07/16 14:34:50 by rhohls           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strcount(char **str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);	
}