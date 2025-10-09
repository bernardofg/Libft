/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfantine@student.42porto.com <bfantine>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 19:28:22 by bfantine@st       #+#    #+#             */
/*   Updated: 2025/10/09 20:00:28 by bfantine@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
    
int atoi(const char *nptr);
{
    int i;
    int sign;
    int result;

    result = 0;
    sign = 1;
    i = 0;
    while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
        i++;
    if (nptr[i] == '-')
        sign *= -1;
    if (nptr[i] == '-' || nptr[i] == '+')
        i++;
    while (nptr[i] >= '0' && nptr[i] <= '9')
    {
        result = result * 10 + (nptr[i] - 48);
        i++;
    }
    return (result * sign);
}