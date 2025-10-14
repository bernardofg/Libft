/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfantine <bfantine@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 19:11:47 by bfantine@st       #+#    #+#             */
/*   Updated: 2025/10/14 17:01:57 by bfantine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>

void	*ft_bzero(void *s, size_t len);
void	*ft_memset(void *b, int c, size_t len);
void	*ft_memcpy(void *dest, const void *src, size_t n);

int	ft_atoi(const char *nptr);
int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
int	ft_tolower(int c);
int	ft_toupper(int c);

size_t	ft_strlen(const char *str);

char	*ft_strdup(const char *s1);

#endif