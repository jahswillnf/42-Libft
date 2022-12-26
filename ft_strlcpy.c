/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahswillnf <jahswillnf@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 17:16:16 by jahswillnf        #+#    #+#             */
/*   Updated: 2022/12/22 23:43:09 by jahswillnf       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"
#include <stddef.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t len)
//return value is always the size of src
{
	size_t	i;
	size_t	count;

	count = ft_strlen(src);
	i = 0;
	if (len != 0)
	{
		while (src[i] != '\0' && i < len - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (count);
}

// void	main()
// {
// 	char			*dst;
// 	char			*src;
// 	unsigned int	len;

// 	src = "kofineama";
// 	len = 2;
// 	printf("%d\n", ft_strlcpy(dst, src, len));
// 	printf("%s\n", dst);
// }
