/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inavarro <inavarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 17:25:17 by inavarro          #+#    #+#             */
/*   Updated: 2022/07/26 17:52:12 by inavarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_atoi(char *str);

int main(int argc, char **argv)
{
	argc = 0;
	printf("%d", ft_atoi(argv[1]));
}