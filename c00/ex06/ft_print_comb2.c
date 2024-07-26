/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkahrama <bkahrama@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 20:34:04 by bkahrama          #+#    #+#             */
/*   Updated: 2024/07/16 20:39:03 by bkahrama         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 1;
	while (a <= 98)
	{
		ft_putchar(a / 10 + 48);
		ft_putchar(a % 10 + 48);
		ft_putchar(' ');
		ft_putchar(b / 10 + 48);
		ft_putchar(b % 10 + 48);
		write(1, ", ", (a != 98) * 2);
		b++;
		if (b > 99)
			b = ++a + 1;
	}
}
