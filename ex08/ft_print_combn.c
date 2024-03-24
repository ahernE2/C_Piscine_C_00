/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 02:20:49 by alejhern          #+#    #+#             */
/*   Updated: 2024/03/24 23:12:34 by alejhern         ###   ########.fr       */
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
	if (actual== n)
	{
		while (i < n)
		{
			ft_putchar(combination[i]);
			i++;
		}
		ft_putchar(',');
		ft_putchar(' ');
		return ;
	}
	while (d < 10)
	{
		combination[actual] = '0' + d;
		print_recursive(n, d + 1, actual + 1, combination);
		d++;
	}
}

void	ft_print_combn(int n)
{
	int	combination[10];

	print_recursive(n, 0, 0, combination);
}

int	main(void)
{
	ft_print_combn(4);
	return (0);
}
