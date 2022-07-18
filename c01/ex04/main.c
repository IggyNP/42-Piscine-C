/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inavarro <inavarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 10:16:35 by inavarro          #+#    #+#             */
/*   Updated: 2022/07/18 21:10:49 by inavarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int main (void)
{
    int x;
    int y;
    int *a;
    int *b;
    
    x = 22;
    y = 5;
    a = &x;
    b = &y;
    
    printf("Dividendo: %d\n" "Divisor: %d\n", x, y);
    ft_ultimate_div_mod(a, b);
    printf("Div (*a): %d\n" "Mod (*b): %d\n", x, y);
    return (0);
}
