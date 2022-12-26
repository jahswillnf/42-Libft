/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahswillnf <jahswillnf@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 20:34:40 by jahswillnf        #+#    #+#             */
/*   Updated: 2022/12/23 13:14:28 by jahswillnf       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stddef.h>

size_t	ft_strlen(const char *str)
// returns the length of the string
{
	size_t		count;

	count = 0;
	while (*str++)
	{
		++count;
	}
	return (count);
}

// int	main(char *str)
// {
// 	int	b;

// 	str = "kwesi";
// 	b = ft_strlen(str);
// 	printf("%d\n", b);
// }
