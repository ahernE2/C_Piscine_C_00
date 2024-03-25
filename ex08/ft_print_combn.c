/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 02:20:49 by alejhern          #+#    #+#             */
/*   Updated: 2024/03/25 13:34:27 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_recursive(int n, int start, int actual, int *combination)
{
	int	i;
	int	d;

	i = 0;
	d = start;
	if (actual == n)
	{
		while (i < n)
		{
			ft_putchar(combination[i] + '0');
			i++;
		}
		if (combination[0] < 10 - n)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		return ;
	}
	while (d < 10)
	{
		combination[actual] = d;
		print_recursive(n, d + 1, actual + 1, combination);
		d++;
	}
}

void	ft_print_combn(int n)
{
	int	combination[10];

	combination[0] = 0;
	if (n > 0 && n <= 10)
		print_recursive(n, 0, 0, combination);
}
/*
int	main(void)
{
	ft_print_combn(9);
	return 0;
}*/
