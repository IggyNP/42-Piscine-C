/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inavarro <inavarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 13:29:03 by inavarro          #+#    #+#             */
/*   Updated: 2022/07/25 22:19:56 by inavarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (
		(s1[i] == s2[i]) && (i < n - 1)
		&& ((s1[i] != '\0') || (s2[i] != '\0')))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
