/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 10:35:13 by aldantas          #+#    #+#             */
/*   Updated: 2024/09/12 00:24:45 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 65 && str[i] <= 90)
			|| (str[i] >= 97 && str[i] <= 122))
			c++;
		i++;
	}
	if (c == i || i == 0)
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
int	main()
{
       printf("%d", ft_str_is_alpha("asda"));
}*/
