/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-d <amunoz-d@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 14:30:48 by amunoz-d          #+#    #+#             */
/*   Updated: 2022/04/21 10:38:55 by amunoz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char			*tmpdest;
	unsigned char			*tmpsrc;
	size_t					i;

	tmpsrc = (unsigned char *)src;
	tmpdest = (unsigned char *)dest;
	i = 0;
	if (dest > src)
	{
		while (len-- > 0)
		{
			tmpdest[len] = tmpsrc[len];
		}
	}
	else
	{
		while (i < len)
		{
			tmpdest[i] = tmpsrc[i];
			i++;
		}
	}
	return (dest);
}
