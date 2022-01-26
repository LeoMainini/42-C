/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leferrei <leferrei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 17:14:00 by leferrei          #+#    #+#             */
/*   Updated: 2022/01/25 17:22:48 by leferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	str_len(char *src)
{
	int size;

	size = 0;
	while (src[size] != '\0')
		size++;
	return (size);

}

char	*ft_strdup(char *src)
{
	char	*new_str;
	int		index;

	index = 0;
	new_str = malloc(str_len(src));
	while (src[index] != '\0')
	{
		new_str[index] = src[index];
		index++;
	}
	if (str_len(src) != str_len(new_str))
		return (0);
	return (&new_str[0]);
}
/*
int main(void)
{
	char test[] = "ola o mey nome e leo";
	char *out = ft_strdup(test);
	printf("%s\n%s\n", test, out);
}
*/
