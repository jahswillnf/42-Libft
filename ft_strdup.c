/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahswillnf <jahswillnf@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 00:39:49 by jahswillnf        #+#    #+#             */
/*   Updated: 2022/12/23 00:49:52 by jahswillnf       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stdlib.h>
#include "libft.h"
#include <stddef.h>

char	*ft_strdup(const char *s)
{
	char	*newstr;
	size_t	i;

	i = ft_strlen(s);
	newstr = malloc(sizeof(char) * (i + 1));
	if (!newstr)
	{
		return (0);
	}
	ft_memcpy(newstr, s, i + 1);
	return (newstr);
}

// int main(void) {
//   char *s = "Hello, world!";
//   char *dup = ft_strdup(s);

//   printf("Original string: %s\n", s);
//   printf("Duplicated string: %s\n", dup);
//   free(dup);
//   return 0;
// }
