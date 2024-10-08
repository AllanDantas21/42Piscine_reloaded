/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 18:27:51 by aldantas          #+#    #+#             */
/*   Updated: 2024/09/06 00:14:21 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	c;
	int	i;
	int	swap;

	c = 0;
	i = 0;
	while (c <= size - 1)
	{
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				swap = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = swap;
			}
			i++;
		}
		c++;
		i = 0;
	}
}
/*
#include <stdio.h>
int     main(void)
{       
	int b;
        int nb[4] = {3,2,5,1};
        
        b = 0;
        ft_sort_int_tab(nb, 5);

        while(b < 4)
        {
                printf("%d", nb[b]);
                b++;
        }
}*/
