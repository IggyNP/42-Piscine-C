/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inavarro <inavarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 13:44:07 by inavarro          #+#    #+#             */
/*   Updated: 2022/07/18 21:21:02 by inavarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int main(void)
{
	int *tab;
	int str[] = {1, 2, 3, 4, 5};
	int size = 5;
	int i;
    
	tab = str;
	ft_rev_int_tab(tab , size);

	while (i < size)
	{
	printf("%d,", tab[i]);
	i++;
	}
	return(0);
}
