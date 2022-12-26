/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahswillnf <jahswillnf@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 20:37:07 by jahswillnf        #+#    #+#             */
/*   Updated: 2022/12/23 21:32:57 by jahswillnf       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	size_t	i;

	i = ft_strlen(s1) + ft_strlen(s2);
	if (!s2 || !s1)
		return (0);
	join = (char *)malloc(i + 1);
	if (join == NULL)
		return (NULL);
	ft_strlcpy(join, s1, (i + 1));
	ft_strlcat(join, s2, (i + 1));
	return (join);
}

// int	main()
// {
// char const *str;
// char const *nstr;
// char *ptr;

// str = "ama is a girl";
// nstr = " kofi is a child";
// ptr = ft_strjoin(str, nstr);
// printf("%s\n", ptr);
// }
