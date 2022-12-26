/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahswillnf <jahswillnf@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 00:52:24 by jahswillnf        #+#    #+#             */
/*   Updated: 2022/12/25 01:00:09 by jahswillnf       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char			*ret;
	unsigned int	i;

	if (!s)
		return (0);
	ret = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!ret)
		return (0);
	i = 0;
	while (s[i])
	{
		ret[i] = f(i, s[i]);
		++i;
	}
	ret[i] = 0;
	return (ret);
}

// char toupper_at_even(unsigned int i, char c)
// {
//     if (i % 2 == 0)
//         return (char)ft_toupper(c);
//     return c;
// }

// int main(void)
// {
//     char *s = "hello";
//     char *mapped;

//     mapped = ft_strmapi(s, toupper_at_even);
//     printf("%s\n", mapped);  // prints "HeLlO"
// }
