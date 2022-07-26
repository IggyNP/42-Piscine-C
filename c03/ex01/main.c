/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inavarro <inavarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 20:22:15 by inavarro          #+#    #+#             */
/*   Updated: 2022/07/24 20:23:23 by inavarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(int argc, char **argv)
{
	argc = 0;
	printf("Mi funcion: %d\n", ft_strncmp(argv[1], argv[2], atoi(argv[3])));
	printf("String.h: %d\n", strncmp(argv[1], argv[2], atoi(argv[3])));
	return (0);
}
