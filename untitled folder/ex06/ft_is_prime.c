/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leferrei <leferrei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 20:26:27 by leferrei          #+#    #+#             */
/*   Updated: 2022/01/30 14:57:46 by leferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	divider;

	divider = nb - 1;
	if (nb < 2)
		return (0);
	while (divider > 1)
	{
		if (nb % divider == 0)
			return (0);
		divider--;
	}
	return (1);
}
/*
int main(void)
{
	printf("%d\n",ft_is_prime(2358));
}
*/
