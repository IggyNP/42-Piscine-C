/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agil-rey <agil-rey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 11:28:33 by agil-rey          #+#    #+#             */
/*   Updated: 2022/07/09 11:58:06 by agil-rey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char caracter);

void	rush(int x, int y)
{
	int	fila;
	int	columna;

	fila = 1;
	while (x > 0 && fila <= y)
	{
		columna = 1;
		while (columna <= x)
		{
			if (fila == 1 && columna == 1)
				ft_putchar('/');
			else if ((fila == 1 && columna == x) || (fila == y && columna == 1))
				ft_putchar('\\');
			else if (fila == y && columna == x)
				ft_putchar('/');
			else if (fila == 1 || columna == 1 || columna == x || fila == y)
				ft_putchar('*');
			else
				ft_putchar(' ');
			columna++;
		}
		ft_putchar('\n');
		fila++;
	}
}
