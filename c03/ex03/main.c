/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inavarro <inavarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 12:55:38 by inavarro          #+#    #+#             */
/*   Updated: 2022/07/24 20:24:34 by inavarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char str1[] = "hello";
	char str2[] = "world";
	int nb = 3;
	printf("Str1: \"%s\"\n", str1);
	printf("str2: \"%s\"\n", str2);
	printf("strcat: %s", ft_strncat(str1, str2, nb));
	return (0);
}