/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfantine@student.42porto.com <bfantine>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 16:42:29 by bfantine@st       #+#    #+#             */
/*   Updated: 2025/10/09 16:42:29 by bfantine@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strlen(const char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

char *ft_strdup(const char *s1)
{
    char    *dest;
    size_t i;
    dest = (char *) malloc(ft_strlen(s1) + 1); // casting do resultado transforma em string
    if (!dest)
        return (NULL);
    i = 0;
    while (s1[i])
    {
        dest[i] = s1[i];
        i++;
    }
    dest[i] = 0;
    return (dest);     
}

#include <stdio.h>
#include "libft.h"

int main(void)
{
    char *str = "Olá, 42!";
    char *copia;

    copia = ft_strdup(str);
    if (copia)
    {
        printf("Original: %s\n", str);
        printf("Cópia: %s\n", copia);
    }

    free(copia);
    return (0);
}