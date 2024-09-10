/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 13:20:03 by aldantas          #+#    #+#             */
/*   Updated: 2024/09/10 13:33:34 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_boolean.h"
void ft_putstr(char *str)
{
    while (*str)
    write(1, str++, 1);
}
t_bool ft_is_even(int nbr)
{
    return ((EVEN(nbr)) ? TRUE : FALSE);
}
int main(int argc, char **argv)
{
    (void)argv;
    if (ft_is_even(argc - 1) == TRUE)
    ft_putstr(EVEN_MSG);
    else
    ft_putstr(ODD_MSG);
    return (SUCCESS);
}