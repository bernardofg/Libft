/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfantine <bfantine@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:25:43 by bfantine          #+#    #+#             */
/*   Updated: 2025/10/14 16:58:11 by bfantine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*tempdest;
	char	*tempsrc;
	size_t	i;

	i = 0;
	if (!dest || !src)
		return (NULL);
	tempdest = (char *)dest;
	tempsrc = (char *)src;
	if (tempdest > tempsrc)
	{
		i = n;
		while (i > 0)
		{
			i--;
			tempdest[i] = tempsrc[i];
		}
	}
	else
	{
		while (i < n)
		{
			tempdest[i] = tempsrc[i];
			i++;
		}
	}
	return (dest);
}

#include <string.h>
#include <stdio.h>

int main(void)
{
	char str[100] = "Learningisfun";
	char *first, *second;

	first = str;
	second = str;
	memmove(second + 8, first, 10);
	printf("==>memmove original <==\n%s\n", str);
	char str1[100] = "Learningisfun";
	first = str1;
	second = str1;
	ft_memmove(second + 8, first, 10);
	printf("==>memmove meu <==\n%s\n", str1);
	return 0;
}
