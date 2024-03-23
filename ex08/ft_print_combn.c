/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 02:20:49 by alejhern          #+#    #+#             */
/*   Updated: 2024/03/23 19:40:45 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	imprimir(int numero, int n)
{
	int	divisor;
	int	i;

	divisor = 1;
	i = 0;
	while (i < n - 1)
	{
		divisor *= 10;
		i++;
	}
	while (divisor > 0)
	{
		ft_putchar((numero / divisor) + '0');
		numero %= divisor;
		divisor /= 10;
	}
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_combi(int n)
{
	int	numero;
	int	limite;
	int	i;

	numero = 0;
	i = 0;
	limite = 1;
	while (i < n -1)
	{
		limite *= 10;
		i++;
	}
	while (numero < limite)
	{
		imprimir(numero, n);
		numero++;
	}
}

int	main(void)
{
	ft_print_combi(2);
	return (0);
}
