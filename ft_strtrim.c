/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahswillnf <jahswillnf@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 21:55:42 by jahswillnf        #+#    #+#             */
/*   Updated: 2022/12/24 16:28:43 by jahswillnf       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stddef.h>
// #include <stdlib.h>
#include "libft.h"

static int	ft_isset(char c, const char *set)
{
	while (*set)
	{
		if (c == *set++)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*newstr;
	char	*start;
	char	*end;

	if (!s1 || !set)
		return (0);
	start = (char *)s1;
	end = start + ft_strlen(s1);
	while (*start && ft_isset(*start, set))
		++start;
	while (start < end && ft_isset(*(end - 1), set))
		--end;
	newstr = ft_substr(start, 0, end - start);
	return (newstr);
}

// int main()
// {
//   char* str = "cde   Hello, World!   f";
//   char *set = " cdef";
//   char* trimmed;
//   trimmed = ft_strtrim(str, set);
//   printf("'%s'\n", trimmed);
//   free(trimmed);
// }
