/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leferrei <leferrei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 13:11:35 by leferrei          #+#    #+#             */
/*   Updated: 2022/01/25 19:40:57 by leferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>


int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int str_len(char *str1)
{
	int size;

	size = 0;
	while (str1[size] != '\0')
		size++;
	return (size);
}

void	ft_swap(char **out, int i, int j)
{
	char *temp;

	temp = out[i];
	out[i] = out[j];
	out[j] = temp;
}

void	write_out(char **out, int argc)
{
	int	i;
	int	k;

	i = 1;
	k = 0;
	while (i < argc)
	{
		while (out[i][k] != '\0')
		{
			write(1, &out[i][k], 1);
			k++;
		}
		write(1, "\n", 1);
		k = 0;
		i++;
	}
}

int main(int argc, char *argv[])
{
	int		i;
	int		j;
	char **out;

	out = argv;
	i = 1;
	if (argc < 2)
		return (0);
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if(ft_strcmp(out[i], out[j]) > 0)
			{
				ft_swap(out, i, j);
			}
			j++;
		}
		i++;
	}
	write_out(out, argc);
}
