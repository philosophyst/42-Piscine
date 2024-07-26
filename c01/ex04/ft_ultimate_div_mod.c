/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkahrama <bkahrama@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 00:35:08 by bkahrama          #+#    #+#             */
/*   Updated: 2024/07/17 13:50:43 by bkahrama         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	if (*b == 0)
		return ;
	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}
