/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leferrei <leferrei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 17:25:49 by leferrei          #+#    #+#             */
/*   Updated: 2022/01/26 18:34:11 by leferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
int	*ft_range(int min,int max)
{
	int *array_p;
	int index;
	int size;

	index = 0;
	if (min >= max)
		return (0);
	if (min < 0 && max > 0)
		size = (max - min);
	else if (min < 0 && max < 0)
		size = (-(min) - -(max));
	else
		size = (max - min);
	array_p = malloc(size * 4);
	while (index < size)
	{
		array_p[index] = min + index;
		index++;
	}
	return (&array_p[0]);
}

int main(void)
{
	int *array = ft_range(5, 10);
	for (int i = 0; i < 10; i++)
		printf("%d, ", array[i]);
}

