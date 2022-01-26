/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leferrei <leferrei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 12:02:51 by leferrei          #+#    #+#             */
/*   Updated: 2022/01/26 19:28:00 by leferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/*
int	ft_ultimate_range(int **range,int min,int max)
{
	int index;
	int size;
	int *test;

	if (min >= max)
		return (0);
	if (min < 0 && max > 0)
		size = (max - min);
	else if (min < 0 && max < 0)
		size = (-(min) - -(max));
	else
		size = (max - min);
	test = malloc(size * 4);
	range = &test;
	index = 0;
	while (index < size)
	{
		test[index] = min + index;
		index++;
	}
	return (size);
}
*/

int	*ft_range(int min,int max, int *size)
{
	int *array_p;
	int index;

	index = 0;
	if (min >= max)
		return (0);
	if (min < 0 && max > 0)
		*size = (max - min);
	else if (min < 0 && max < 0)
		*size = (-(min) - -(max));
	else
		*size = (max - min);
	array_p = malloc(*size * 4);
	while (index < *size)
	{
		array_p[index] = min + index;
		index++;
	}
	return (array_p);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int size;

	int *ptr = ft_range(min, max, &size);
	if (ptr == 0)
		return (-1);
	printf("adress of range in ft - %p\n", range);
	range = &ptr;
	return (size);

}
/*
int main(void)
{
	int **out_range;

	int a = ft_ultimate_range(out_range, 2, 10);

	printf("adress of range in main - %p\n", out_range);
//	for (int i = 0; i < a-1; i++)
//		printf("%d, ", range[i]);
}
*/
