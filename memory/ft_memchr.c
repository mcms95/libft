/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 17:18:41 by ncardoso          #+#    #+#             */
/*   Updated: 2022/03/31 17:18:56 by ncardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n);
{
	size_t i;
	
	i = 0;

	while (i < n)
	{
		if (*(unsigned char *)(str + i) == (unsigned char) c)
		{
			return ((void *)(str + i));
		}
		i++;
	}
	return (NULL);
}
/*int main()
{
    char str[] = "Nuno Miguel";
    char *pos = ft_memchr(str, 'M', 11);
    printf("%c", pos[0]);
    return (0);
}*/
