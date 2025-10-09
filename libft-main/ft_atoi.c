/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfantine@student.42porto.com <bfantine>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 19:28:22 by bfantine@st       #+#    #+#             */
/*   Updated: 2025/10/07 19:28:22 by bfantine@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
    
int ft_atoi(char *str)
{
    int i;
    int sign;
    int result;

    result = 0;
    sign = 1;
    i = 0;
    while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
        i++;
    if (str[i] == '-')
        sign *= -1;
    if (str[i] == '-' || str[i] == '+')
        i++;
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - 48);
        i++;
    }
    return (result * sign);
}