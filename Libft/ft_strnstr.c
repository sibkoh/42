/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-d <amunoz-d@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 10:13:49 by amunoz-d          #+#    #+#             */
/*   Updated: 2022/04/25 12:44:52 by amunoz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *substr, size_t n)
{
	unsigned int	i;
	unsigned int	pos;
	unsigned int	len;
	unsigned int	n2;

	i = 0;
	pos = 0;
	len = ft_strlen(substr);
	n2 = 0;
	if (len == 0)
		return ((char *)str);
	while ((str[i++]) && (n-- > 0))
	{
		n2 = n;
		while ((substr[pos] == str[i + pos]) && (n2 > 0))
		{
			if (pos == len -1)
				return ((char *)str + i);
			pos++;
			n2--;
		}
		pos = 0;
	}
	return (0);
}
