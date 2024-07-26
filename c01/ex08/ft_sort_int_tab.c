/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkahrama <bkahrama@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 15:30:07 by bkahrama          #+#    #+#             */
/*   Updated: 2024/07/17 21:38:11 by bkahrama         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_swap(int *a, int *b)
{
	*a = *b + *a;
	*b = *a - *b;
	*a = *a - *b;
	return (1);
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	is_swap;

	is_swap = 1;
	while (is_swap)
	{
		i = -1;
		is_swap = 0;
		while (++i < size - 1)
		{
			if (tab[i] > tab[i + 1])
				is_swap = ft_swap(&tab[i], &tab[i + 1]);
		}
	}
}
