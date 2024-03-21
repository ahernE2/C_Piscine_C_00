/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 19:48:59 by alejhern          #+#    #+#             */
/*   Updated: 2024/03/21 22:20:37 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_numbers(void)
{
	int	numero;

	numero = '0';
	while (numero <= '9')
	{
		write(1, &numero, 1);
		numero ++;
	}
}
/*
int main(){
	ft_print_numbers();
	return 0;
}
*/
