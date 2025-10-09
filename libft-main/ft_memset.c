/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfantine@student.42porto.com <bfantine>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 21:17:17 by bfantine@st       #+#    #+#             */
/*   Updated: 2025/10/07 21:17:17 by bfantine@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memset(void *b, int c, size_t len)
{
    unsigned char   *ptr;

    ptr = (unsigned char *)b;
    while (len > 0)
    {
        *ptr = (unsigned char)c;
        ptr++;
        len--;
    }
    return (b);
}