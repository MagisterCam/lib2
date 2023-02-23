/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckretsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 12:26:25 by ckretsch          #+#    #+#             */
/*   Updated: 2023/02/20 14:03:12 by ckretsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# define BUFF_SIZE 32

typedef struct	s_list
{
	void		*content;
	size_t		content_size;
	struct s_list	*next;
}		t_list;

typedef struct	s_btree
{
	struct s_btree	*left;
	struct s_btree	*right;
	void		*item;
}		t_btree;

typedef struct	s_cell
{
	char		*stock;
	int		prev_fd;
}		t_cell;

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
int	ft_toupper(int c);
int	ft_tolower(int c);

void	*ft_memset(void *str, int c, size_t count);
void    ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t size);
void	*ft_memmove(void *dest, const void *src, size_t size);
void	*ft_memchr(const void *haystack, int needle, size_t barn);
int	ft_memcmp(const void *s1, const void *s2, size_t n);

size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s);
char	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnstr(const char *big, const char *little, size_t len);

int	ft_strncmp(const char *s1, const char *s2, size_t n);

int	ft_atoi(const char *nptr);

void	*ft_calloc(size_t count, size_t size);

#endif
