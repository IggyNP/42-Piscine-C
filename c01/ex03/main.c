/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inavarro <inavarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 18:15:55 by inavarro          #+#    #+#             */
/*   Updated: 2022/07/18 21:10:45 by inavarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 22;
	b = 5;

	printf("Dividendo: %d\n" "Divisor: %d\n", a, b);
	ft_div_mod(a, b, &div, &mod);
	printf("Div: %d\n" "Mod: %d\n", div, mod);
	return (0);
}
