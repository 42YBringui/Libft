/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybringui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 14:45:02 by ybringui          #+#    #+#             */
/*   Updated: 2023/03/07 18:53:05 by ybringui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*str;
	unsigned const char	*s;

	str = dest;
	s = src;
	i = 0;
	while (i < n)
	{
		str[i] = s[i];
		i++;
	}
	return (dest);
}
