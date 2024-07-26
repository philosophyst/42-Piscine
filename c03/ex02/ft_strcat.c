/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkahrama <bkahrama@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 17:07:03 by bkahrama          #+#    #+#             */
/*   Updated: 2024/07/26 19:21:51 by bkahrama         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcat(char *dest, char *src)
{
	int	i;

	i = -1;
	while (dest[++i])
		;
	while (*src)
		dest[i++] = *src++;
	return (dest[i] = '\0', dest);
}
