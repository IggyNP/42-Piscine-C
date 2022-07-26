/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inavarro <inavarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 20:20:24 by inavarro          #+#    #+#             */
/*   Updated: 2022/07/25 22:06:52 by inavarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strstr(char *str, char *to_find);

int main (void)
{
	char str[] = "The answer to everything is 42";
	char to_find[] = "everything";
	printf("Haystack: \"%s\"\n", str);
	printf("Needle: \"%s\"\n", to_find);
	printf("Result: %s\n", ft_strstr(str, to_find));
	printf("%s", strstr(str, to_find));
}
