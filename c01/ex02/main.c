/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inavarro <inavarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 16:21:15 by inavarro          #+#    #+#             */
/*   Updated: 2022/07/18 21:10:29 by inavarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

int main(void)

{
	int a;
	int b;
	a = 7;
	b = 8;
	printf("Antes del swap: a=%d b=%d\n", a, b);
	ft_swap(&a, &b);
	printf("Después del swap: a=%d b=%d\n", a, b);
	return (0);
}
