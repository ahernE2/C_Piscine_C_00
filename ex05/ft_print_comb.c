/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 00:06:55 by alejhern          #+#    #+#             */
/*   Updated: 2024/03/24 16:30:59 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	generar_comb(char a, char b, char c)
{
	if (a < b && b < c)
	{
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(c);
		if (a != '7' || b != '8' || c != '9')
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '9')
	{
		b = '0';
		while (b <= '9')
		{
			c = '0';
			while (c <= '9')
			{
				generar_comb(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
/*
int main() {
    ft_print_comb();
    return 0;
}
*/
