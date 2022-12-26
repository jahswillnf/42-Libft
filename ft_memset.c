/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahswillnf <jahswillnf@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 09:56:24 by jahswillnf        #+#    #+#             */
/*   Updated: 2022/12/23 12:36:58 by jahswillnf       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stddef.h>

void	*ft_memset(void *s, int c, size_t len)
{
	void	*result;

	result = s;
	while (len--)
		*(char *)s++ = (unsigned char)c;
	return (result);
}

// int	main(void)
// {
// 	char s[11] = "hello world";
// 	printf("%s\n", ft_memset(s, '\0', 6));
// }
