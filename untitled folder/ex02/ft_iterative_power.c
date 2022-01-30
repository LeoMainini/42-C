/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leferrei <leferrei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 17:23:11 by leferrei          #+#    #+#             */
/*   Updated: 2022/01/30 14:52:06 by leferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	while (power > 0)
	{
		result = result * nb;
		power--;
	}
	return (result);
}
/*
int main(void)
{
	printf("5^5 = %d\n", ft_iterative_power(5, 3));
	printf("5^0 = %d\n", ft_iterative_power(5, 0));
	printf("5^-1 = %d\n", ft_iterative_power(5, -1));
	printf("0^5 = %d\n", ft_iterative_power(0, 5));
	printf("5^1 = %d\n", ft_iterative_power(5, 2));
	printf("0^0 = %d\n", ft_iterative_power(0, 0));

}
*/
