/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfantine <bfantine@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 12:21:27 by bfantine          #+#    #+#             */
/*   Updated: 2025/10/14 17:02:00 by bfantine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	unsigned char	*tempdest;
	unsigned char	*tempsrc;

	i = 0;
	if (dest == (void *) 0 && src == (void *) 0)
		return (dest);
	tempdest = (unsigned char *)dest;
	tempsrc = (unsigned char *)src;
	while (tempdest[i] < n)
	{
		tempdest[i] == tempsrc[i];
		i++;
	}
	return (dest);
}
