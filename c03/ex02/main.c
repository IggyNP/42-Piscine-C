/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inavarro <inavarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 12:34:18 by inavarro          #+#    #+#             */
/*   Updated: 2022/07/25 19:53:24 by inavarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcat(char *dest, char *src);

int main (void)
{
	char str1[] = "hello";
	char str2[] = "worlddddddd";
	printf("Str1: \"%s\"\n", str1);
	printf("str2: \"%s\"\n", str2);
	printf("strcat: %s", ft_strcat(str1, str2));
	return (0);
}
