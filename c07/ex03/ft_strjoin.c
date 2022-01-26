/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leferrei <leferrei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 19:28:41 by leferrei          #+#    #+#             */
/*   Updated: 2022/01/26 20:32:13 by leferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	get_total_malloc_s(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	total_size;

	i = 0;
	total_size = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			total_size++;
			j++;
		}
		i++;
	}
	i = 0;
	while (sep[i] != '\0')
	{
		i++;
	}
	if (size == 0)
		return (0);
	return (total_size + (size - 1) * i);
}

void	append_section(char **strs, char *output, int i, int *k)
{
	int	j;

	j = 0;
	while (strs[i][j] != '\0')
	{
		output[*k] = strs[i][j];
		j++;
		*k = *k + 1;
	}
}

void	append_sep(char *sep, char *output, int *k)
{
	int	j;

	j = 0;
	while (sep[j] != '\0')
	{
		output[*k] = sep[j];
		*k = *k + 1;
		j++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*output;
	int		bytes;
	int		i;
	int		k;

	bytes = get_total_malloc_s(size, strs, sep);
	output = malloc(size);
	i = -1;
	k = 0;
	while (i < size && size > 0)
	{
		i++;
		append_section(strs, output, i, &k);
		if (i < size - 1)
			append_sep(sep, output, &k);
	}
	return (output);
}
/*
int main(void)
{
	char *strings[] = {"ola", "o", "meu", "nome", "e", "leo"};
	printf("%s\n", ft_strjoin(6, strings, "123456789"));
}
*/
