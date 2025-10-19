/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfantine <bfantine@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 19:48:40 by bfantine          #+#    #+#             */
/*   Updated: 2025/10/19 16:43:44 by bfantine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdbool.h>


static int  count_words(char const *str, char c);
static int  get_len(char *str, char c);
static int  fill(char **new, char const *s, char c);

static int  fill(char **new, char const *s, char c)
{
    size_t  len;

    while (*s)
    {
        len = 0;
        while (*s == c && *s)
            ++s;
        while (*s != c && *s)
        {
            ++len;
            ++s;
        }
        if (len)
        {
            
        }
    }
    
}


static int  count_words(char const *str, char c)
{
    int	n;
	int	count;
	int	word;

	word = 1;
	count = 0;
	n = 0;
    while (str[n])
    {
        if (str[n] == c)
            word = 1;
        else
        {
            if (word == 1)
                count++;
            word = 0;            
        }
        return (count);
    }
}

char    **ft_split(char const *s, char c)
{
    int words;
    char    **new;

    if (!s)
        return (NULL);
    words = 0;
    words = count_words(s, c);
    new = malloc((words + 1) * sizeof(char *));
    if (!new)
        return (NULL);
    new[words] = NULL;
    
}

