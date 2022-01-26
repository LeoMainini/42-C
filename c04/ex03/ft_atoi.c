/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 19:42:34 by leferrei          #+#    #+#             */
/*   Updated: 2022/01/25 16:51:38 by leferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
/*
void	clear_out(int *out)
{
	int	i;

	i = 0;
	while (i < 10)
	{
		out[i] = '\0';
		i++;
	}
}

int	gen_out(int *output, int *result, int neg)
{
	int	index;

	index = 0;
	while (output[index] <= '9' && output[index] >= '0'
		&& output[index] != '\0')
	{
		if (*result == 0)
		{
			if (output[index + 1] >= '0' && output[index + 1] <= '9')
			*result += (output[index] - 48) * 10 + (output[index + 1] - 48);
			else
				*result += output[index] - 48;
			index++;
		}
		else
			*result = (*result * 10) + (output[index] - 48);
		index++;
	}
	if (neg % 2 != 0)
	{
		*result = -(*result);
	}
	return (*result);
}
*/
int	ft_atoi(char *str)
{
	int	neg;
	int	index;
	int	result;

	result = 0;
	index = 0;
	neg = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32
		|| *str == '-' || *str == '+')
	{
		if (*str == '-')
			neg++;
		if (*(str + 1) >= '0' && *(str + 1) <= '9')
			break ;
		str++;
	}
	str++;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
		index++;
	}
	return (result);
}
/*
int main(void)
{
	int a = ft_atoi("  ---+---+123ab567");

	int b = ft_atoi(" ---+----+123ab567");

	int c = ft_atoi("---+----+1ab567");

	int d = ft_atoi("---+---+1ab567");

	int e = ft_atoi("---+---+123ab567");

	int f = ft_atoi("---+---+55555ab567");

	int g = ft_atoi("---+---+0000ab567");

	int h = ft_atoi("---+----+0000ab567");

	printf("%d\n", a);
	printf("%d\n", b);
	printf("%d\n", c);
	printf("%d\n", d);
	printf("%d\n", e);
	printf("%d\n", f);
	printf("%d\n", g);
	printf("%d\n", h);
}
*/
