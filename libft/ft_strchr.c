/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luyang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 12:29:13 by luyang            #+#    #+#             */
/*   Updated: 2023/11/01 12:37:27 by luyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, const char *str)
{
	while (*s)
	{
		if (*(unsigned char *)s == (unsigned char)*str)
			return ((char *)s);
		s++;
	}
	if (*str == 0)
		return ((char *)s);
	return (NULL);
}

/*int	main (void)
{
	ft_strchr("Happy November", 'z');
}*/
