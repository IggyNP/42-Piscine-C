/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inavarro <inavarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 16:13:22 by inavarro          #+#    #+#             */
/*   Updated: 2022/07/20 18:58:33 by inavarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int main (void)
{
	char dest[] = "mario";
	char src[] = "sonic";
	unsigned int size = 64;

	printf("Palabra origen: \"%s\"\n", src);
	printf("Palabra de destino \"%s\"\n", dest);
	ft_strlcpy(dest, src, size);
	printf("Palabra de destino cambiada: \"%s\"\n", dest);
	printf("Longitud copiada: \"%d\"", ft_strlcpy(dest, src, size));
}
