/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckretsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 12:47:02 by ckretsch          #+#    #+#             */
/*   Updated: 2023/02/03 12:47:06 by ckretsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	unsigned int	i;
	unsigned char	*d;

	i = 0;
	d = (unsigned char *)str;
	while (i < len)
		d[i++] = (unsigned char)c;
	str = (void *)d;
	return (str);
}
