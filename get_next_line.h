/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjorda <jjorda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 11:20:52 by jjorda            #+#    #+#             */
/*   Updated: 2024/11/05 21:10:35 by jjorda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdio.h>

/* ----------------------------- get_next_line ------------------------------ */

char	*get_next_line(int fd);
char	*ft_free(char **str);

/* -------------------------- get_next_line_utils --------------------------- */

char	*ft_strdup(char *s1);
size_t	ft_strlen(const char *s);
char	*ft_substr(const char *s, unsigned int start, size_t len);
char	*ft_gnl_strjoin(const char *s1, const char *s2);
int		ft_gnl_strchr(char *s, int c);

#endif