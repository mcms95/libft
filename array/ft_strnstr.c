/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 17:53:41 by ncardoso          #+#    #+#             */
/*   Updated: 2022/03/31 17:55:00 by ncardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_len;

	little_len = ft_strlen(little);
	if (little_len == 0)
		return ((char *)big);
	if (len == 0)
		return (0);
	while (*(char *)big && (int)(len - little_len) != -1)
	{
		if (!ft_strncmp((char *)big, (char *)little, little_len))
			return ((char *)big);
		len--;
		big++;
	}
	return (0);
}
