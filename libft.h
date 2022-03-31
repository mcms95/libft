/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 15:04:08 by ncardoso          #+#    #+#             */
/*   Updated: 2022/03/31 18:07:31 by ncardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdio.h>
# include <stdbool.h>


// CHAR FUNCTIONS

int	ft_isalnum(int str);
int	ft_isalpha(int str);
int	ft_isascii(int str);
int	ft_isdigit(int str);
int	ft_isprint(int str);

// MEMORY FUNCTIONS
void	*ft_memset(void *str, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dst, cont void *src, size_t n);
void	*ft_memchr(const void *str, int c, size_t n);
int	ft_memcmp(const void *str1, const void *str2, size_t n);void ft_bzero(void *str, size_t n);

// ARRAY FUNCTIONS

size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
int	ft_toupper(int c);
char	*ft_strchr(const char *s, int c);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strdup(const char *src);

// CONVERSION FUNCTIONS

int	ft_atoi(const char *str);











#endif
