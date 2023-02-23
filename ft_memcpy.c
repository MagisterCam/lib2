/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckretsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 12:47:35 by ckretsch          #+#    #+#             */
/*   Updated: 2023/02/03 12:47:37 by ckretsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t size)
{
	char		*d;
	size_t		i;
	const char	*s;

	s = (char *)src;
	d = (char *)dest;
	i = 0;
	while (i < size)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
