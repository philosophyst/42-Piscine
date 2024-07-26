/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkahrama <bkahrama@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 14:19:25 by bkahrama          #+#    #+#             */
/*   Updated: 2024/07/20 14:35:03 by bkahrama         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strupcase(char *str)
{
	while (*str)
		if (*str >= 'a' && *str <= 'z')
			*str -= 32;
	else
		str++;
	return (str);
}