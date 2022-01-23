/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leferrei <leferrei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 22:47:51 by leferrei          #+#    #+#             */
/*   Updated: 2022/01/22 22:48:14 by leferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
/*
int	ft_iterative_factorial(int nb)
{
	int factor;
	int number;
	
	number = nb;
	if (nb < 0)
		number = -number;
	factor = number - 1;
	while (factor > 0)
	{
		number = number * factor;
		factor--;
	}
	if (nb < 0)
		return(-(number));
	return (number);
}
*/

int	ft_iterative_factorial(int nb)
{
	if (nb != 1 && nb != -1)
	{
		if (nb > 0)
		{
			nb--;
			nb = (nb + 1) * ft_iterative_factorial(nb);
		}
		else
		{
			nb++;
			nb = (nb - 1) * -ft_iterative_factorial(nb);
		}	
	}
	return (nb);
}

int	main(void)
{
	printf("-1 %d\n", ft_iterative_factorial(-1));
	printf("1 %d\n", ft_iterative_factorial(1));
	printf("-2 %d\n", ft_iterative_factorial(-2));
	printf("2 %d\n", ft_iterative_factorial(2));
	printf("10 %d\n", ft_iterative_factorial(10));
	printf("-10 %d\n", ft_iterative_factorial(-10));
}
