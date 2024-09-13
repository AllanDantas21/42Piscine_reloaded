/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 00:46:46 by aldantas          #+#    #+#             */
/*   Updated: 2024/09/12 22:16:13 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_hex(char c)
{
	ft_putchar('\\');
	ft_putchar("0123456789abcdef"[c / 16]);
	ft_putchar("0123456789abcdef"[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 32 && str[i] <= 126)
			ft_putchar(str[i]);
		else
			ft_print_hex(str[i]);
		i++;
	}
}
/*
int main() {
	// Teste 1: String normal
	char str1[] = "Hello, World!";
	ft_putstr_non_printable(str1);
	ft_putchar('\n');

	// Teste 2: String com caracteres não imprimíveis
	char str2[] = "This is a \t test \n string.";
	ft_putstr_non_printable(str2);
	ft_putchar('\n');

	// Teste 3: String vazia
	char str3[] = "";
	ft_putstr_non_printable(str3);
	ft_putchar('\n');

	// Teste 4: Apenas não imprimíveis
	char str4[] = "\t\n\r";
	ft_putstr_non_printable(str4);
	ft_putchar('\n');

	return 0;
}*/