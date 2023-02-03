/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 03:53:41 by hlakhal-          #+#    #+#             */
/*   Updated: 2022/11/10 16:53:01 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <limits.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_putnbr(int nb);
int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_put_hex(unsigned int nb, char c);
char	*ft_uitoa(unsigned int n);
int		ft_putnbr_u(unsigned int nb);
int		ft_printf(const char *str, ...);
int		ft_pointer_void(void *nb);
void	*ft_memset(void *b, int c, size_t len);
char	*ft_strchr(const char *s, int c);
char	*ft_itoa(int n);
int		ft_put_hex_u(size_t nb, char c);
#endif
