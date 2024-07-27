/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkahrama <bkahrama@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 22:56:33 by bkahrama          #+#    #+#             */
/*   Updated: 2024/07/26 23:27:46 by bkahrama         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	y;

	i = 0;
	y = -1;
	while (dest[++y])
		;
	while (*src && i++ < nb)
		dest[y++] = *src++;
	return (dest[y] = '\0', dest);
}
