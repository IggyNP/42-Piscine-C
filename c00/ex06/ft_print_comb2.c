/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inavarro <inavarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 11:07:50 by inavarro          #+#    #+#             */
/*   Updated: 2022/07/13 12:30:01 by inavarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_comb2(void)
{
	char	x;
	char	y;

	x = 0;
	while (x < 100)
	{
		y = (x + 1);
		while (y < 100)
		{
			ft_putchar(x / 10 + '0');
			ft_putchar(x % 10 + '0');
			write(1, " ", 1);
			ft_putchar(y / 10 + '0');
			ft_putchar(y % 10 + '0');
			if (x / 10 != 9 || x % 10 != 8)
			{
				write (1, ", ", 2);
			}
			y++;
		}
		x++;
	}	
}	

void	ft_putchar(char c)
{
	write (1, &c, 1);
}
