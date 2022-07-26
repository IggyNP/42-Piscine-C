/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inavarro <inavarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 08:27:18 by inavarro          #+#    #+#             */
/*   Updated: 2022/07/25 20:30:27 by inavarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

#include <stdio.h>
#include <string.h>
int main(int argc, char **argv)
{
	argc = 0;
	printf("Mi funcion: %d\n", ft_strcmp(argv[1], argv[2]));
	printf("String.h: %d\n", strcmp(argv[1], argv[2]));
}
