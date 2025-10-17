/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfantine <bfantine@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 19:30:29 by bfantine          #+#    #+#             */
/*   Updated: 2025/10/17 17:01:02 by bfantine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	strlcat(char *dst, const char *src, size_t dsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	i = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dsize <= dst_len)
		return (dsize + dst_len);
	while (src[i] && (i + dst_len) < dsize - 1)
	{
		dst[dst_len + 1] = src[i];
		i++;
	}
	dst[dst_len + 1] = 0;
	return (dst_len + src_len);
}
