/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-d <amunoz-d@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 09:35:23 by amunoz-d          #+#    #+#             */
/*   Updated: 2022/04/26 11:01:51 by amunoz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*pnum;

	pnum = malloc(num * size);
	if (!pnum)
		return (NULL);
	ft_bzero(pnum, (num * size));
	return (pnum);
}
