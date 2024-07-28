/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkahrama <bkahrama@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 22:13:17 by bkahrama          #+#    #+#             */
/*   Updated: 2024/07/28 18:53:19 by bkahrama         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	d;
	unsigned int	s;
	unsigned int	x;
	unsigned int	i;

	d = ft_strlen(dest);
	s = ft_strlen(src);
	if (!size || size <= d)
		return (s + size);
	i = d;
	x = size - d - 1;
	while (*src && 0 < x--)
		dest[i++] = *src++;
	return (dest[i] = '\0', d + s);
}
