/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-d <amunoz-d@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 09:14:30 by amunoz-d          #+#    #+#             */
/*   Updated: 2022/04/28 11:31:38 by amunoz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	i;
	unsigned int	size;
	unsigned int	slen;

	i = 0;
	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if ((slen - start) > len)
		size = len + 1;
	else
		size = slen - start + 1;
	if (start >= slen)
		size = 1;
	str = (char *)malloc(sizeof(char) * size);
	if (!str)
		return (NULL);
	while (s[start + i] && i < len && start < slen)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
