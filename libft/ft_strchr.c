/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfantine <bfantine@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 13:53:57 by bfantine          #+#    #+#             */
/*   Updated: 2025/10/14 14:14:46 by bfantine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strchr(const char *s, int c)
{
	char		tempc;
	unsigned int	i;

	tempc = (char) c;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == tempc)
			return ((char *) &s[i]);
		i++;
	}
	if (s[i] == tempc)
		return ((char *) &s[i]);
	return (NULL);
}
