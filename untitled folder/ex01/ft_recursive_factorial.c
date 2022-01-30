/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leferrei <leferrei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 12:52:08 by leferrei          #+#    #+#             */
/*   Updated: 2022/01/30 13:33:07 by leferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	if (nb != 1 && nb != -1)
	{
		if (nb > 0)
		{
			nb--;
			nb = (nb + 1) * ft_recursive_factorial(nb);
		}
	}
	return (nb);
}
/*
int main(void){
	printf("5 %d\n", ft_recursive_factorial(5));
	printf("0 %d\n", ft_recursive_factorial(0));
	printf("1 %d\n", ft_recursive_factorial(1));
	printf("10 %d\n", ft_recursive_factorial(10));
	printf("-5 %d\n", ft_recursive_factorial(-5));
	printf("-10 %d\n", ft_recursive_factorial(-10));

}
*/
