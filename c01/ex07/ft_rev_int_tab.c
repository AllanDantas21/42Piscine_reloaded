/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 12:52:38 by aldantas          #+#    #+#             */
/*   Updated: 2024/09/06 00:16:01 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	i = 0;
	while (i < size -1)
	{
		temp = tab[i];
		tab[i] = tab[size - 1];
		tab[size -1] = temp;
		i++;
		size--;
	}
}
/*int	main()
{	int i = 0;
	int	nbr[6] = {1,2,3,4,5,6};

	ft_rev_int_tab(nbr, 6);

	while(i < 6)
	{
		printf("%d", nbr[i]);
		i++;
	}

}*/
