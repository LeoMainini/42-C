/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leferrei <leferrei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 18:44:11 by leferrei          #+#    #+#             */
/*   Updated: 2022/01/23 19:36:56 by leferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_fibonacci(int index)
{	if(index > 1)
	{
		return (ft_fibonacci(index-2) + ft_fibonacci(index-1));
	}
	else if (index == 1)
		return (1);
	else if (index == 0)
		return (0);
	else
		return(-1);
}
/*
void test_fib(int N)
{
	int num, numA, numB, i;
	numA = 1; numB = 0; i = 0;
	while(i < N){
	    printf("%d, ", numA);
	    num = numA + numB;
	    numB = numA;
	    numA = num;
	    i++;
	 }
}

int main(void)
{
	printf("%d\n", ft_fibonacci(0));
	//test_fib(0);
}
*/
