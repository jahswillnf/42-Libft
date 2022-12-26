/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahswillnf <jahswillnf@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 01:21:22 by jahswillnf        #+#    #+#             */
/*   Updated: 2022/12/25 00:24:59 by jahswillnf       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"
#include <stddef.h>

size_t	ft_strlcat(char *dst, const char *src, size_t len)
//return value is always the total size of src and dst
{
	size_t	i;
	size_t	result;

	i = 0;
	while (*dst && i < len)
	{
		++dst;
		++i;
	}
	result = ft_strlcpy(dst, src, len - i);
	return (result + i);
}

// int	main(void)
// {
// 	unsigned int	len;

// 	char dst[] = "the boy is a good ";
// 	char src[] = "boy is good too good like me";
// 	len = 35;
// 	printf("%d\n", ft_strlcat(dst, src, len));
// 	printf("%s\n", dst);
// }
