/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 02:20:49 by alejhern          #+#    #+#             */
/*   Updated: 2024/03/23 02:29:22 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	imprimir(int numero[], int n)
{
	int	i;

	i = 0;
	while (i < n) 
	{
		ft_putchar(numero[i] + '0');
		i++;
	}
	ft_putchar(',');
	ft_putchar(' ');	
}

void	ft_print_combi(int n)
{
	int	numeros[n];
	int	i;

	i = 0;
	while (i < n)
	{
		numeros[i] = 0;
		i++;
	}
	i = 0;
	while (numeros[0] <= 9)
	{
		imprimir(numeros, n);		
		i = n - 1;
		while (i >= 0 && numeros[i] == 9)
		{
			numeros[i] = 0;
			i--;
		}
		if (i >= 0)
		{
			numeros[i]++;
		}
		else
		{
			break;
        }
    }
}

int main() {
    ft_print_combi(3);
    return 0;
}
