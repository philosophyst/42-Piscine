/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkahrama <bkahrama@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 18:15:19 by bkahrama          #+#    #+#             */
/*   Updated: 2024/07/20 19:15:59 by bkahrama         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strlowcase(char *str)
{
	while (*str)
		if (*str >= 'A' && *str <= 'Z')
			*str += 32;
	else
		str++;
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	logic;

	i = -1;
	logic = 1;
	ft_strlowcase(str);
	while (str[++i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (logic)
				str[i] -= 32;
			logic = 0;
		}
		else
			logic = !(str[i] >= '0' && str[i] <= '9');
	}
	return (str);
}
