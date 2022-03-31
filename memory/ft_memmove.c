/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 17:20:14 by ncardoso          #+#    #+#             */
/*   Updated: 2022/03/31 17:20:27 by ncardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft'h"

void *ft_memmove(void *dst, const void *src, size_t n);
{
	size_t			i;
	unsigned char	*char_dst;
	unsigned char	*char_src;

	char_dst = ((unsigned char *)dst);
	char_src = ((unsigned char *)src);
	i = 0;
	if (dst > src)
	{
		while (i < n)
		{
			char_dst[n - 1 - i] = char_src[n - 1 - i];
			i++;
		}
	}
	else
	{
		while (i < len)
		{
			char_dst[i] = char_src[i];
			i++;
		}
	}
	return (dst);
}
