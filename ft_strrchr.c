/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckretsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 15:42:02 by ckretsch          #+#    #+#             */
/*   Updated: 2023/02/10 15:42:05 by ckretsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <libft.h>

char	*ft_strrchr(const char *s, int c)
{
	size_t	count;

	count = ft_strlen(s);
	while (count--)
	{
		if (*s == (char)c)
			return ((char *)s);
	}
	return (NULL);
}
