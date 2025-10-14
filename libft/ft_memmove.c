/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfantine <bfantine@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:25:43 by bfantine          #+#    #+#             */
/*   Updated: 2025/10/14 15:45:29 by bfantine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *memmove(void *dest, const void *src, size_t n)
{
    unsigned char   *tempdest;
    unsigned char   *tempsrc;
    unsigned int    i;

    i = 0;
	if (dest == (void *) 0 && src == (void *) 0)
        return (dest);
    tempdest = (unsigned char *)dest;
    tempsrc = (unsigned char *)src;
    if ((dest >= src && dest < srn + n))

}