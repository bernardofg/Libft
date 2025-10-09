/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfantine@student.42porto.com <bfantine>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 21:17:17 by bfantine@st       #+#    #+#             */
/*   Updated: 2025/10/09 20:43:21 by bfantine@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
    unsigned char   *temp;

    temp = (unsigned char *)b;
    while (len > 0)
    {
        *temp = (unsigned char)c;
        temp++;
        len--;
    }
    return (b);
}