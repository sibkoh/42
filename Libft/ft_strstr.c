/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-d <amunoz-d@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 10:13:49 by amunoz-d          #+#    #+#             */
/*   Updated: 2022/04/22 13:51:04 by amunoz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strstr(const char *str, const char *substr)
{
	int	i;
	int	pos;
	int	len;

	i = 0;
	pos = 0;
	len = ft_strlen(substr);
	if (len == 0)
		return ((char *)str);
	while (str[i])
	{
		while (substr[pos] == str[i + pos])
		{
			if (pos == len -1)
				return ((char *)str + i);
			pos++;
		}
		pos = 0;
		i++;
	}
	return (0);
}
