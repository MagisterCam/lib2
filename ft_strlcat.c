/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckretsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 12:48:32 by ckretsch          #+#    #+#             */
/*   Updated: 2023/02/03 12:48:35 by ckretsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	catseyes;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	catseyes = dstsize - dstlen - 1;
	if (dstsize <= dstlen)
		return (dstlen + srclen);
	if (srclen < catseyes)
		catseyes = srclen;
	ft_memcpy(dst + dstlen, src, catseyes);
	dst[dstlen + catseyes] = '\0';
	return (dstlen + srclen);
}
