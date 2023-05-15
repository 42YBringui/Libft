/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybringui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 13:55:29 by ybringui          #+#    #+#             */
/*   Updated: 2023/02/04 14:19:32 by ybringui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	memset(s, 0, n);
}

/*
int	main(void)
{
	char	buffer[100];

	strcpy(buffer, "This is a test");
	printf("Before: %s\n", buffer);
	bzero(buffer, strlen(buffer));
	printf("After: %s\n", buffer);
	return (0);
}
*/
