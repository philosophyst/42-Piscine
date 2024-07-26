/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkahrama <bkahrama@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 20:10:59 by bkahrama          #+#    #+#             */
/*   Updated: 2024/07/20 21:55:44 by bkahrama         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (32 <= *str && *str <= 126)
			write(1, str, 1);
		else
		{
			write(1, "\\", 1);
			write(1, &"0123456789abcdef"[*str / 16], 1);
			write(1, &"0123456789abcdef"[*str % 16], 1);
		}
		str++;
	}
}

int	main(void)
{
	ft_putstr_non_printable("Coucou\ntu vas bien ?");
}
