/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahswillnf <jahswillnf@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 17:57:06 by jahswillnf        #+#    #+#             */
/*   Updated: 2022/12/23 21:06:07 by jahswillnf       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"
#include <stdlib.h>
#include <stddef.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	size;
	size_t	i;

	if (!s)
		return (0);
	if (ft_strlen(s) < len)
		len = ft_strlen(s);
	size = len;
	substr = malloc(sizeof(char) * (size + 1));
	if (substr == NULL)
		return (NULL);
	if (start > ft_strlen(s))
	{
		*substr = '\0';
		return (substr);
	}
	i = 0;
	while (i < len)
	{
		*(substr + i) = (*(s + start + i));
		i++;
	}
	*(substr + i) = '\0';
	return (substr);
}

// int	main()
// {
// char const *str;
// char *ptr;

// str = NULL;
// ptr = ft_substr(str, 3, 5);
// printf("%s\n", ptr);
// }
