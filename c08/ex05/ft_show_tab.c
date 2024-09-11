/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 20:26:24 by aldantas          #+#    #+#             */
/*   Updated: 2024/09/10 21:23:39 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

static void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

static void	ft_putnbr(int nb)
{
	char	*base;

	base = "0123456789";
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		ft_putnbr(nb *= -1);
		return ;
	}
	else if (nb >= 10)
		ft_putnbr(nb / 10);
	write(1, &base[nb % 10], 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str)
	{
		ft_putstr(par[i].str);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}