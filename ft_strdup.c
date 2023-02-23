/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckretsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 15:43:58 by ckretsch          #+#    #+#             */
/*   Updated: 2023/02/10 15:44:03 by ckretsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Duplique une chaine de caracteres
 * Alloue de la memoire pour une nouvelle chaine de caracteres de la 
 * meme longueur que s + \0 (ft_strlen)
 * Si l'allocation echoue -> NULL
 * Boucle utilisee pour copier les caracteres de s dans str. Boucle terminee
 * lorsqu'elle rencontre \0 de s
 * Ajoute \0 a la fin de la nouvelle chaine
 * Renvoie un pointeur vers le debut de la nouvelle chaine
 *
 * */
char	*ft_strdup(const char *s)
{
	char	*str;
	size_t	n;

	n = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (str == NULL)
		return (NULL);
	while (s[n])
	{
		str[n] = s[n];
		n++;
	}
	str[n] = '\0';
	return (str);
}
