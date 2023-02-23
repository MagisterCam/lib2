/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckretsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 12:17:48 by ckretsch          #+#    #+#             */
/*   Updated: 2023/02/05 12:17:52 by ckretsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <libft.h>

void	*ft_memchr(const void *haystack, int needle, size_t barn)
{
	const unsigned char	*h;

	h = haystack;
	while (barn--)
	{
		if (*h == (unsigned char)needle)
			return ((void *)h);
		h++;
	}
	return (NULL);
}
