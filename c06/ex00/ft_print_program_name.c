/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leferrei <leferrei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 12:52:48 by leferrei          #+#    #+#             */
/*   Updated: 2022/01/24 12:56:58 by leferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char *argv[])
{
	if (argc < 0)
		return (0);
	while (*argv[0] != '\0')
	{
		write(1, argv[0], 1);
		argv[0]++;
	}
	write(1, "\n", 1);
	return (0);
}
