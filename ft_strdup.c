/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybringui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 10:59:02 by ybringui          #+#    #+#             */
/*   Updated: 2023/02/25 19:41:46 by ybringui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		str_len;
	int		i;
	char	*buffer;

	str_len = 0;
	i = 0;
	if (s1)
		while (s1[str_len])
			str_len++;
	else
		str_len = 0;
	buffer = (char *)malloc(sizeof(*buffer) * (str_len + 1));
	if (!buffer)
		return (0);
	while (i < str_len)
	{
		buffer[i] = s1[i];
		i++;
	}
	buffer[i] = 0;
	return (buffer);
}
