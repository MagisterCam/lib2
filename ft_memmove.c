/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckretsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 12:48:01 by ckretsch          #+#    #+#             */
/*   Updated: 2023/02/03 12:48:03 by ckretsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	size_t		i;
	char		*d;
	const char	*s;

	i = 0;
	d = (char *) dest;
	s = (char *) src;
	if (d > s)
	{
		while (i < size)
		{
			d[size - 1] = s[size - 1];
				size--;
		}
	}
	else
	{
		while (i < size)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}
