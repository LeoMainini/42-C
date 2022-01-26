/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 13:18:43 by leferrei          #+#    #+#             */
/*   Updated: 2022/01/25 15:53:54 by leferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	check_wrongbase(char *base)
{
	int	wrong_base;
	int	index;
	int	index2;

	index = 0;
	index2 = 0;
	while (base[index2] != '\0')
	{
		while (base[index] != '\0')
		{
			index++;
			if (base[index2] == base[index])
				wrong_base = 1;
		}
		if (!((base[index2] >= 65 && base[index2] <= 90)
				|| (base[index2] >= 97 && base[index2] <= 122)
				|| (base[index2] >= '0' && base[index2] <= '9')))
			wrong_base = 1;
		index2++;
	}
	if (wrong_base == 1)
		return (1);
	return (0);
}

void	convert_write(char *base, long nbr_l, int base_size)
{
	int		index;
	char	output[1024];

	index = 1023;
	if (!(nbr_l < base_size))
	{
		while (nbr_l != 0)
		{
			output[index] = base[nbr_l % base_size];
			index--;
			nbr_l = nbr_l / base_size;
		}
		while (index < 1024)
		{
			if (output[index] != '\0')
				write(1, &output[index], 1);
			index++;
		}
	}
	else
		write(1, &base[nbr_l], 1);
}

void	ft_putnbr_l_base(int nbr, char *base)
{
	int		base_size;
	int		index;
	long	nbr_l;

	nbr_l = (long)nbr;
	index = 0;
	while (base[base_size] != '\0')
		base_size++;
	if (base_size < 2)
		return ;
	if (check_wrongbase(base) == 1)
		return ;
	if (nbr_l < 0)
	{
		write(1, "-", 1);
		nbr_l = -nbr_l;
	}
	convert_write(base, nbr_l, base_size);
}
/*
int main(void)
{
	ft_putnbr_l_base(-2147483648, "0123456789ABCDEF");
}
*/
