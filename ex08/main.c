/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexen267 <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 22:55:48 by alexen267         #+#    #+#             */
/*   Updated: 2025/01/20 23:01:44 by alexen267        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void		ft_putchar(char c);
void		ft_print_number(int *arr, int n);
void		ft_gen_comb(int *arr, int n, int index, int start);
void		ft_print_combn(int n);

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		ft_print_combn(atoi(av[1]));
	}
	return (0);
}
