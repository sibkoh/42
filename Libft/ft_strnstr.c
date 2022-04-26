/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-d <amunoz-d@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 10:13:49 by amunoz-d          #+#    #+#             */
/*   Updated: 2022/04/26 11:59:41 by amunoz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *substr, size_t n)
{
	unsigned int	len;
	unsigned int	i;

	len = ft_strlen(substr);
	if (len == 0)
		return ((char *) str);
	if (len == 0)
		return (0);
	i = 0;
	while (str[i] && i <= (n - len))
	{
		if (!ft_strncmp(&str[i], substr, len))
			return ((char *) &str[i]);
		i++;
	}
	return (0);
}
