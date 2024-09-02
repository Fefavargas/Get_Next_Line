/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvargas <fvargas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 15:45:02 by fvargas           #+#    #+#             */
/*   Updated: 2024/08/14 16:13:24 by fvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# ifndef FD_SIZE
#  define FD_SIZE 1024
# endif

# include <stdlib.h> // malloc(), free()
# include <stdint.h> // SIZE_MAX
# include <unistd.h> // read()
# include <stddef.h> // size_t

char	*get_next_line(int fd);
size_t	ft_strlen(const char *s);
void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_strchr(const char *s, int c);
char	*ft_join(char *stash, char *buffer);

#endif
