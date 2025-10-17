/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfantine <bfantine@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:25:43 by bfantine          #+#    #+#             */
/*   Updated: 2025/10/17 16:57:49 by bfantine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*tempdest;
	unsigned char	*tempsrc;
	size_t			i;

	if (!dest && !src)
		return (NULL);
	tempdest = (unsigned char *)dest;
	tempsrc = (unsigned char *)src;
	if (tempdest < tempsrc)
		tempdest = ft_memcpy(dest, src, n);
	else
	{
		i = n;
		while (i > 0)
		{
			i--;
			tempdest[i] = tempsrc[i];
		}
	}
	return (dest);
}

/*
#include <stdio.h>
int	main(void)
{
	char src[] = "abcdef";

	printf("Antes: %s\n", src);

 	ft_memmove(((void*)0), src, 5);

	printf("Depois: %s\n", src);

	return (0);
}
*/
