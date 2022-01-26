/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leferrei <leferrei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 13:05:25 by leferrei          #+#    #+#             */
/*   Updated: 2022/01/24 13:10:30 by leferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char *argv[])
{
	int		index;
	
	index = argc - 1;
	while (index > 0)
	{
		while (*argv[index] != '\0')
		{
			write(1, argv[index], 1);
			argv[index]++;
		}
		write(1, "\n", 1);
		index--;
	}
	return (0);
}
