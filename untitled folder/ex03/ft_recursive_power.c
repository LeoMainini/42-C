/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leferrei <leferrei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 17:43:24 by leferrei          #+#    #+#             */
/*   Updated: 2022/01/30 14:52:46 by leferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 0)
	{
		nb = nb * ft_recursive_power(nb, power - 1);
		return (nb);
	}
	else
		return (nb);
}
/*
int main(void)
{
	printf("5^5 = %d\n", ft_recursive_power(5, 5));
}
*/
