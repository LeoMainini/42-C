/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leferrei <leferrei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 22:47:51 by leferrei          #+#    #+#             */
/*   Updated: 2022/01/30 14:51:02 by leferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	number;

	number = nb;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (nb > 1)
	{
		nb--;
		number = number * nb;
	}
	return (number);
}

/*
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
	printf("22 %d\n", ft_iterative_factorial(22));
	printf("0 %d\n", ft_iterative_factorial(0));

}
*/
