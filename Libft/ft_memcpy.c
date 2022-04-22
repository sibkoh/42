/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-d <amunoz-d@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 14:30:48 by amunoz-d          #+#    #+#             */
/*   Updated: 2022/04/21 09:24:50 by amunoz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t count)
{
	unsigned char			*str;

	str = (unsigned char *)dest;
	while (count-- > 0)
	{
		*(unsigned char *)dest = *(unsigned char *)src;
		str++;
		dest++;
	}
	return (str);
}
