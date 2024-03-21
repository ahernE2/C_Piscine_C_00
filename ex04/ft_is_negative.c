/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 22:23:14 by alejhern          #+#    #+#             */
/*   Updated: 2024/03/21 22:40:34 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_is_negative(int n)
{
	char	signo;

	if (n >= 0)
	{
		signo = 'P';
	}
	else
	{
		signo = 'N';
	}
	write(1, &signo, 1);
}
/*
int main(){
	ft_is_negative(-5);
	return 0;
}
*/
