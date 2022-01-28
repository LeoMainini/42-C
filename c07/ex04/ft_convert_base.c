/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leferrei <leferrei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 12:09:26 by leferrei          #+#    #+#             */
/*   Updated: 2022/01/28 16:40:55 by leferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <math.h>
#include <unistd.h>
#include <stdlib.h>

char	*clean_output(int size, char *output)
{
	char	*clean_output;
	int		i;

	i = 0;
	clean_output = malloc(size);
	while (i <= size)
	{
		clean_output[i] = output[1023 - size + i];
		i++;
	}
	printf("size = %d\n", size);
	printf("clean-out = %s\n", clean_output);
	return (clean_output);
}

int	check_wrongbase(char *base)
{
	int	wrong_base;
	int	index;
	int	index2;

	index2 = 0;
	wrong_base = 0;
	while (base[index2] != '\0')
	{
	    index = index2 + 1;
		while (base[index] != '\0')
		{
			if (base[index2] == base[index] && index2 != index)
				wrong_base = 1;
			index++;
		}
		if (!((base[index2] >= 65 && base[index2] <= 90)
				|| (base[index2] >= 97 && base[index2] <= 122)
				|| (base[index2] >= '0' && base[index2] <= '9')))
			wrong_base = 1;
		index2++;
	}
    return (wrong_base);
}

char	*convert_write(char *base, long nbr_l, int base_size)
{
	int		index;
	char	output[1024];
	int		size;
	int		neg;

	neg = 0;
	size = 0;
	index = 1023;
	if (nbr_l < 0)
	{
		neg = 1;
		nbr_l = -nbr_l;
	}
	while (nbr_l != 0)
	{
		output[index] = base[nbr_l % base_size];
		index--;
		nbr_l = nbr_l / base_size;
	}
	if ( neg == 1)
		output[index] = '-';
	else
		index++;
	size = 1023 - index;
	return (clean_output(size, output));
}

char	*ft_putnbr_l_base(long nbr, char *base)
{
	int		base_size;
	int		index;

	index = 0;
	base_size = 0;
	while (base[base_size] != '\0')
		base_size++;
	if (base_size < 2 || check_wrongbase(base) == 1)
		return (0);
	return (convert_write(base, nbr, base_size));
}

int	ft_r_pow(int nb,int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 0)
	{
		nb = nb * ft_r_pow(nb, power - 1);
		return (nb);
	}
	else
		return(nb);
}

long get_index_base(char *base, char value)
{
	int	i;
	long	result;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == value)
			result = i;
		i++;
	}
	return (result);
}

long	convert_to_decimal(char *nbr, char *base_from)
{
	int		base_size;
	char	output[1024];
	int		i;
	long	result;
	int		nbr_size;

	base_size = 0;
	nbr_size = 0;
	while (base_from[base_size] != '\0')
		base_size++;
	while (nbr[nbr_size] != '\0')
		nbr_size++;
	i = 1;
	result = 0;
	printf("nbr size %d\n", nbr_size);
	while (i <= nbr_size)
	{
		printf("result = %ld\n", result);
		result = result + (get_index_base(base_from, nbr[i - 1]))
			* (ft_r_pow(base_size, nbr_size - i));
		i++;
	}
	return (result);
}

char	*ft_convert_base(char *nbr,char *base_from,char *base_to)
{
	int		neg;
	char	*output;
	int		index;


	if (nbr[0] == '-')
	{
		neg = 1;
		nbr++;
	}
	else
		neg = 0;
	if (check_wrongbase(base_from) == 1)
	{
		return	(0);
	}
	long a = convert_to_decimal(nbr, base_from);
	if (neg % 2 != 0)
		a = -a;
	printf("result = %ld\n", a);
	return(ft_putnbr_l_base(a, base_to));

	
}

int main(void)
{
	printf("%s\n", ft_convert_base("-7F", "0123456789ABCDEF", "01"));
}
