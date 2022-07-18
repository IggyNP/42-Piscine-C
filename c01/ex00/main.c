/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inavarro <inavarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 13:37:34 by inavarro          #+#    #+#             */
/*   Updated: 2022/07/18 21:11:19 by inavarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int	x;
	int	*nbr;

	nbr = &x;
	ft_ft(nbr);
	printf("El nuevo valor de x es de: %d\n", x);
	return (0);
}
