/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfantine <bfantine@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 14:07:31 by bfantine          #+#    #+#             */
/*   Updated: 2025/10/20 15:17:06 by bfantine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*nstr;

	if (!s || !f)
		return (NULL);
	nstr = malloc(ft_strlen(s) + 1);
	if (!nstr)
		return (NULL);
	i = 0;
	while (nstr[i])
	{
		nstr[i] = f(i, s[i]);
		i++;
	}
	nstr[i] = '\0';
	return (nstr);
}
