/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 17:19:48 by ncardoso          #+#    #+#             */
/*   Updated: 2022/03/31 17:19:52 by ncardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n);
{
	size_t i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		*(char *)(dest + i) = *(char *)(src + i);
		i++;
	}
}

/*int main()
{
    char src[] = "nuno";
    char dest [6];
    ft_memcpy(dest, src, sizeof(char) * 6);
    //memcpy(dest, src, sizeof(char) * 6);
    printf("%s", dest);
}*/
