/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfantine <bfantine@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 12:21:27 by bfantine          #+#    #+#             */
/*   Updated: 2025/10/15 12:34:15 by bfantine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	unsigned char	*tempdest;
	unsigned char	*tempsrc;

	i = 0;
	if (!dest && !src)
		return (NULL);
	if (dest == (void *) 0 && src == (void *) 0)
		return (dest);
	tempdest = (unsigned char *)dest;
	tempsrc = (unsigned char *)src;
	while ((i < n) && tempsrc[i] != '\0')
	{
		tempdest[i] = tempsrc[i];
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char src[] = "abcdef";

	printf("Antes: %s\n", src);

	ft_memcpy(src + 2, src, 4);

	printf("Depois: %s\n", src);

	return (0);
}
*/
