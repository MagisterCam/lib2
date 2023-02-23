/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckretsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 15:40:11 by ckretsch          #+#    #+#             */
/*   Updated: 2023/02/10 15:40:26 by ckretsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/* Compare les n 1ers caracteres de s1 et s2
 * Si n = 0 -> 0 chaines egales
 * Sinon boucle pour iterer a travers de s1 et s2 jusqu'a ce que n soit
 * inferieur a 1 ou que l'un des 2 caracteres soien nuls
 * Si caracteres egaux renvoie 0 -> chaines egales
 * Sinon renvoie la difference entre les 2 caracteres
 * Conversion en unsigned char pour eviter des problemes d'interpretation
 * de la valeur de retour en cas de valeur neg
 *
 **/
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	while ((unsigned char)*s1 == (unsigned char)*s2 && *s1 && n-- > 1)
	{
		s1++;
		s2++;
	}
	if ((unsigned char)*s1 == (unsigned char)*s2)
		return (0);
	return ((unsigned char)*s1 - (unsigned char)*s2);
}