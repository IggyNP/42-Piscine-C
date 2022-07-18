/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inavarro <inavarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 16:33:10 by inavarro          #+#    #+#             */
/*   Updated: 2022/07/18 21:11:05 by inavarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char *str);

int	main(void)
{
	char str[] = "sobresaliente";
	int	contar = ft_strlen(str);
	printf("La longitud del string \"%s\" es de: %d\n", str, contar);
	return (0);
}
