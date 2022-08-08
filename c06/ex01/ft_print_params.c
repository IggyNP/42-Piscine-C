/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inavarro <inavarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 09:07:58 by inavarro          #+#    #+#             */
/*   Updated: 2022/07/27 11:08:40 by inavarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	c;
	int	i;

	c = 1;
	i = 0;
	if (argc > 0)
	{
		while (c < argc)
		{
			while (argv[c][i] != '\0')
			{
				write(1, &argv[c][i], 1);
				i++;
			}
			write(1, "\n", 1);
			i = 0;
			c++;
		}
	}
}
