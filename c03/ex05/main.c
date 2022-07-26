/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inavarro <inavarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 10:38:05 by inavarro          #+#    #+#             */
/*   Updated: 2022/07/26 11:28:21 by inavarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int main (void)
{
	char src[20] = "toalla";
	char dest[20] = "lleva";
	printf("Mi función: %d\n", ft_strlcat(dest, src, 8));
	printf("el destino final: %s\n", dest);
	char src2[20] = "toalla";
	char dest2[20] = "lleva";
	printf("string.h: %lu\n", strlcat(dest2, src2, 8));
	printf("el destino final: %s\n", dest2);
}
