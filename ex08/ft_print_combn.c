/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 02:20:49 by alejhern          #+#    #+#             */
/*   Updated: 2024/03/24 19:17:47 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	tiene_digitos_repetidos(int numero)
{
	int	digitos[10];
	int	digito;
	int	c;

	c = 0;
	while (c < 9)
	{
		digitos[c] = '0';
		c++;
	}
	while (numero > 0)
	{
		digito = numero % 10;
		if (digitos[digito] == 1)
			return (1);
		digitos[digito] = 1;
		numero /= 10;
	}
	return (0);
}
/*
int is_last_value(int numero, int limite)
{
	if (tiene_digitos_repetidos(numero + 1) == 0)
	{
		return (0);
	}	
}
*/
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
		if (tiene_digitos_repetidos(numero) == 0)
		{
			imprimir(numero, n);
			ft_putchar(',');
			ft_putchar(' ');
		}
		numero++;
	}
}

int	main(void)
{
	ft_print_combi(3);
	return (0);
}
