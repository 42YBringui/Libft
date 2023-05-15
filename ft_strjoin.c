/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybringui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 11:23:05 by ybringui          #+#    #+#             */
/*   Updated: 2023/03/06 16:38:43 by ybringui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	char	*final_str;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	final_str = malloc((len_s1 + len_s2 + 1) * sizeof(char));
	i = 0;
	j = 0;
	if (final_str == NULL)
		return (NULL);
	while (j < len_s1)
		final_str[i++] = s1[j++];
	j = 0;
	while (j < len_s2)
		final_str[i++] = s2[j++];
	final_str[i] = '\0';
	return (final_str);
}
