/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 18:06:30 by ncardoso          #+#    #+#             */
/*   Updated: 2022/03/31 18:06:37 by ncardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	char	*cpy;

	i = 0;
	while (src[i] != '\0')
		i++;
	cpy = (char *)malloc(i * sizeof(char) + 1);
	if (cpy == NULL)
		return (0);
	i = 0;
	while (src[i] != '\0')
	{	
		cpy[i] = src[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}
