/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 13:53:39 by leferrei          #+#    #+#             */
/*   Updated: 2022/01/25 15:50:46 by leferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	compute_out(char *out, int nb, int index)
{
	if (nb == 0)
		write(1, "0", 1);
	else
	{
		if (nb < 0)
			write(1, "-", 1);
		while (nb != 0)
		{
			index--;
			if (nb < 0)
			{
				out[index] = -(nb % 10) + 48;
				nb = nb / -10;
			}
			else
			{
				out[index] = nb % 10 + 48;
				nb = nb / 10;
			}
		}
	}
}

void	ft_putnbr(int nb)
{
	char	output[10];
	int		index;

	index = 0;
	while (index < 10)
	{
		output[index] = '\0';
		index++;
	}
	index = 10;
	compute_out(output, nb, index);
	index = 0;
	while (index < 10)
	{
		if (output[index] != '\0')
			write(1, &output[index], 1);
		index++;
	}
}
/*
int main(void)
{
	ft_putnbr(1);
	write(1, "\n", 1);
	ft_putnbr(-1);
	write(1, "\n", 1);
	ft_putnbr(0);
	write(1, "\n", 1);
	ft_putnbr(10000);
	write(1, "\n", 1);
	ft_putnbr(2147483647);
	write(1, "\n", 1);
	ft_putnbr(-2147483648);
	write(1, "\n", 1);
	ft_putnbr(-0);
	write(1, "\n", 1);
	ft_putnbr(1);
	write(1, "\n", 1);
	ft_putnbr(1);
	write(1, "\n", 1);
	ft_putnbr(1);
	write(1, "\n", 1);
	ft_putnbr(1);
	write(1, "\n", 1);
	ft_putnbr(1);
	write(1, "\n", 1);
	ft_putnbr(1);
	write(1, "\n", 1);
	ft_putnbr(1);
	write(1, "\n", 1);
}
*/
