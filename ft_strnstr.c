/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahswillnf <jahswillnf@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 15:15:07 by jahswillnf        #+#    #+#             */
/*   Updated: 2022/12/23 00:59:58 by jahswillnf       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stddef.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	char	*hay;
	char	*needl;
	size_t	i;

	if (!ft_strlen(needle))
		return ((char *)haystack);
	if (!ft_strlen(haystack) || n < ft_strlen(needle))
		return (0);
	i = n - ft_strlen(needle) + 1;
	while (i-- && *haystack)
	{
		hay = (char *)haystack;
		needl = (char *)needle;
		while (*needl && *needl == *hay)
		{
			++hay;
			++needl;
		}
		if (!*needl)
			return ((char *)haystack);
		++haystack;
	}
	return (0);
}

// int main()
// {
// 	char str[] = "mississipi";
// 	char sub[] = "issi";
// 	int i = 8;

// 	char *ptr;
// 	ptr = ft_strnstr(str, sub, i);
// 	printf("%s\n", ptr);
// }
