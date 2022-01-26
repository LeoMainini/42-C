/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leferrei <leferrei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 12:59:19 by leferrei          #+#    #+#             */
/*   Updated: 2022/01/24 13:04:48 by leferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char *argv[])
{
	int index;

	index = 1;
	while (index < argc)
	{
		while (*argv[index] != '\0')
		{
			write(1, argv[index], 1);
			argv[index]++;
		}
		write(1, "\n", 1);
		index++;
	}
	return (0);
}
