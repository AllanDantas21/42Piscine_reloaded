/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 01:21:37 by aldantas          #+#    #+#             */
/*   Updated: 2024/09/14 23:52:43 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	convert_base(char *str, int i, char *base)
{
	int	res;
	int	base_len;
	int	j;

	res = 0;
	base_len = ft_strlen(base);
	while (str[i])
	{
		j = 0;
		while (base[j])
		{
			if (str[i] == base[j])
			{
				res = (res * base_len) + j;
				break ;
			}
			j++;
		}
		if (!base[j])
			break ;
		i++;
	}
	return (res);
}

int	ft_check_base(const char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) < 2)
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] <= 32 || base[i] > 126)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	check_sign(const char *str, int *i, int *sign)
{
	while (str[*i] == '-' || str[*i] == '+')
	{
		if (str[*i] == '-')
			*sign *= -1;
		(*i)++;
	}
	return (*i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	res;

	i = 0;
	sign = 1;
	if (!str || !base || !ft_check_base(base))
		return (0);
	while ((str[i] == 32) || (str[i] >= 9 && str[i] <= 13))
		i++;
	check_sign(str, &i, &sign);
	res = convert_base(str, i, base);
	return (res * sign);
}
