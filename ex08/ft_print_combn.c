/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexen267 <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 22:55:13 by alexen267         #+#    #+#             */
/*   Updated: 2025/01/20 23:01:05 by alexen267        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_number(int *arr, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(arr[i] + '0');
		i++;
	}
	if (arr[0] != 10 - n)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_gen_comb(int *arr, int n, int index, int start)
{
	if (index == n)
	{
		ft_print_number(arr, n);
		return ;
	}
	while (start <= 10 - (n - index))
	{
		arr[index] = start;
		ft_gen_comb(arr, n, index + 1, start + 1);
		start++;
	}
}

void	ft_print_combn(int n)
{
	int	buffer[10];

	if (n <= 0 || n >= 10)
		return ;
	ft_gen_comb(buffer, n, 0, 0);
	ft_putchar('\n');
}
