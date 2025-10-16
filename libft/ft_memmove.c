/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfantine <bfantine@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:25:43 by bfantine          #+#    #+#             */
/*   Updated: 2025/10/16 18:18:29 by bfantine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*tempdest;
	unsigned char	*tempsrc;
	size_t				i;

	if (!dest && !src)
		return (NULL);
	tempdest = (unsigned char *)dest;
	tempsrc = (unsigned char *)src;
	if (tempdest > tempsrc)
	{
		i = n;
		while (i--)
			tempdest[i] = tempsrc[i];
	}
	else
	{
		i = 0;
		while (i < n)
		{
			tempdest[i] = tempsrc[i];
			i++;
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
