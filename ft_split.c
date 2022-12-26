/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahswillnf <jahswillnf@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 12:07:45 by jahswillnf        #+#    #+#             */
/*   Updated: 2022/12/24 16:04:55 by jahswillnf       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stdlib.h>
#include "libft.h"

static size_t	ft_toklen(const char *s, char c)
{
	size_t	tok_num;

	tok_num = 0;
	while (*s)
	{
		if (*s != c)
		{
			++tok_num;
			while (*s && *s != c)
				++s;
		}
		else
			++s;
	}
	return (tok_num);
}

char	**ft_split(const char *s, char c)
{
	char	**split;
	size_t	i;
	size_t	len;

	if (!s)
		return (0);
	i = 0;
	split = malloc(sizeof(char *) * (ft_toklen(s, c) + 1));
	if (!split)
		return (0);
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s && *s != c && ++len)
				++s;
			split[i++] = ft_substr(s - len, 0, len);
		}
		else
			++s;
	}
	split[i] = 0;
	return ((char **)split);
}

// int main(void) {
//     char str[] = "This is a test string";
//     char delim = ' ';  // Use space as the delimiter
//     char **ptr;

//     // Get the first token
//     ptr = ft_split(str, delim);

//     // Walk through other tokens
//     while (ptr != NULL) {
//         printf("%s\n", *ptr);
//         ptr = ft_split(NULL, delim);
//     }

//     return 0;
// }
