/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leferrei <leferrei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 20:39:16 by leferrei          #+#    #+#             */
/*   Updated: 2022/01/30 16:48:42 by leferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_find_next_prime(int nb)
{	
	int	divider;

	divider = 2;
	if (nb <= 2)
		return (2);
	while (divider <= nb / 2 && nb < 2147483647)
	{
		if (nb % divider == 0)
			nb = ft_find_next_prime(nb + 1);
		divider++;
	}
	return (nb);
}

/*
int main(void)
{
	printf("2357- %d\n", ft_find_next_prime(2147483647));
	printf("> 2350- %d\n", ft_find_next_prime(2350));

}
*/
