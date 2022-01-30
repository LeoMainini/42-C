/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leferrei <leferrei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 19:42:24 by leferrei          #+#    #+#             */
/*   Updated: 2022/01/30 16:57:01 by leferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	sqrt;

	sqrt = 0;
	if (nb == 1)
		return (1);
	if (nb <= 0)
		return (0);
	while (sqrt * sqrt < nb)
		sqrt++;
	if (sqrt * sqrt == nb)
		return (sqrt);
	return (0);
}
/*
int main(void)
{
	printf("%d\n", ft_sqrt(25));
}
*/
