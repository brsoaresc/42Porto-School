/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsoares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 09:37:51 by brsoares          #+#    #+#             */
/*   Updated: 2024/10/28 09:38:18 by brsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>
# include <stdarg.h>

typedef struct s_list
{
    void            *content;
    struct s_list   *next;
} t_list;

// Part1
int		ft_isalpha(int ch);
int		ft_isdigit(int ch);
int		ft_isalnum(int ch);
int		ft_isascii(int ch);
int		ft_isprint(int ch);
size_t	ft_strlen(const char *str);
void	*ft_memset(void *dest, int ch, size_t nb);
void	ft_bzero(void *ptr, size_t nb);
void	*ft_memcpy(void *dest, const void *src, size_t nb);
void	*ft_memmove(void *dest, const void *src, size_t nb);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
int		ft_toupper(int ch);
int		ft_tolower(int ch);
char	*ft_strchr(const char *str, int ch);
char	*ft_strrchr(const char *str, int ch);
int		ft_strncmp(const char *str1, const char *str2, size_t n);
void	*ft_memchr(const void *ptr, int ch, size_t nb);
int		ft_memcmp(const void *am1, const void *am2, size_t nb);
char	*ft_strnstr(const char *haystack, const char *needle, size_t max_n);
int		ft_atoi(const char *str);
void	*ft_calloc(size_t number, size_t size);
char	*ft_strdup(const char *str);
// Part2
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
//bonus
t_list	*ft_lstnew(void *content);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
//printf
int	ft_printf(const char *str, ...);
int	put_placeholder(char type, va_list args);
int	printf_putchar(char ch);
int	printf_putstr(char *str);
int	printf_putptr(unsigned long ptr);
int	printf_address(unsigned long addr);
int	printf_putnbr(int number);
int	printf_putnbr_unsigned(unsigned int number);
int	printf_putnbr_hex(unsigned int number, int lowercase);
//get_next_line
char	*get_next_line(int fd);
char	*gnl_read_file(int fd, char *new_str);
char	*gnl_extract_line(char *str);
char	*gnl_reset_str(char *str);
int	gnl_strlen(char *str);
char	*gnl_strchr(const char *str, int ch);
void	*gnl_calloc(size_t nb, size_t size);
char	*gnl_strjoin(char *l_line, char *buffer);

#endif
