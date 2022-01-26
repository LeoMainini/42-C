/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leferrei <leferrei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 19:42:24 by leferrei          #+#    #+#             */
/*   Updated: 2022/01/23 20:26:09 by leferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	ft_sqrt(int nb)
{
	int sqrt = 0;
	while (sqrt < nb)
	{
		if ((sqrt * sqrt) == nb)
			return sqrt;
		sqrt++;
	}
	return (0);

}

int main(void)
{
	printf("%d\n", ft_sqrt(25));
}
