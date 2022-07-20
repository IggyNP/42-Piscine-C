/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inavarro <inavarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 10:50:36 by inavarro          #+#    #+#             */
/*   Updated: 2022/07/19 10:51:52 by inavarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strncpy(char *dest, char *src, unsigned int n);

int main (void)
{
	char src[] = "sonic";
	char dest[] = "mariomario";
	unsigned int n;

	n = 7;

	printf("Fuente: \"%s\"\n", src);
	printf("Destino antes de magia: \"%s\"\n", dest);

	ft_strncpy (dest, src, n);

	printf("Destino después de magia: \"%s\"", dest);
}
