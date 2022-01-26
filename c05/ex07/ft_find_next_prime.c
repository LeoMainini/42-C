/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leferrei <leferrei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 20:39:16 by leferrei          #+#    #+#             */
/*   Updated: 2022/01/23 20:46:50 by leferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_find_next_prime(int nb)
{
	int divider;

	divider = nb - 1;
	while (divider > 1)
	{
		if (nb % divider == 0)
			nb = ft_find_next_prime(nb + 1);	
		divider--;
	}
	return (nb);
}

int main(void)
{
	printf("2357- %d\n", ft_find_next_prime(2357));
	printf("> 2350- %d\n", ft_find_next_prime(2350));

}
