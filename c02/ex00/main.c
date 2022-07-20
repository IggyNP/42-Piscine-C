/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inavarro <inavarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 10:58:37 by inavarro          #+#    #+#             */
/*   Updated: 2022/07/18 20:47:12 by inavarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_strcpy(char *dest, char *src);

int main (void)
{
	char src[] = "sonic";
	char dest[] = "mario";

	printf("Palabra de origen: \"%s\"\n", src);
	printf("Palabra de destino: \"%s\"\n", dest);

	ft_strcpy(dest, src);
	
	printf("Ocurre la magia y ahora el destino es \"%s\"", dest);
	return (0);
}
