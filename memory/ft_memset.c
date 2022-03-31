/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 17:21:00 by ncardoso          #+#    #+#             */
/*   Updated: 2022/03/31 17:21:06 by ncardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		*(unsigned char*)(str + i) = (unsigned char) c;
		i++;
	}
	return (str);
}

/*int main()
{
    //assign some value for chunks of memory (starting in &str), for "n" spots
    char str[10];
    int i;

    ft_memset(str, 'h', sizeof(char) * 10);
    //memset(str, 'o', sizeof(char) * 10);
    i = 0;
    while(i < 10)
    {
        printf("%c", str[i]);
        i++;
    }
    printf("\n");
}*/
