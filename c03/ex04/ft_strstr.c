/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkahrama <bkahrama@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 23:28:18 by bkahrama          #+#    #+#             */
/*   Updated: 2024/07/27 18:53:30 by bkahrama         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strstr(char *str, char *to_find)
{
	char	*s;
	char	*t;

	if (!*to_find)
		return (str);
	while (*str)
	{
		s = str;
		t = to_find;
		while (*s && *t && *s == *t)
		{
			s++;
			t++;
		}
		if (!*t)
			return (str);
		str++;
	}
	return (0);
}
