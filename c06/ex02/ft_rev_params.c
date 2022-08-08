/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inavarro <inavarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 11:12:14 by inavarro          #+#    #+#             */
/*   Updated: 2022/07/27 11:28:59 by inavarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	c;
	int	i;

	c = argc -1;
	i = 0;
	if (argc > 1)
	{
		while (c > 0)
		{
			while (argv[c][i] != '\0')
			{
				write (1, &argv[c][i], 1);
				i++;
			}
			write (1, "\n", 1);
			i = 0;
			c--;
		}
	}
}
