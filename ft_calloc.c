/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahswillnf <jahswillnf@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 21:59:11 by jahswillnf        #+#    #+#             */
/*   Updated: 2022/12/22 23:14:11 by jahswillnf       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stdlib.h>
#include "libft.h"
#include <stddef.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;

	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}
	ft_memset(p, 0, nmemb * size);
	return (p);
}

// int main()
// {
// 	int *p = ft_calloc(5, sizeof(int));
// 	int i = 0;
// 	while (i < 5)
// 	{
// 		printf("%d\n", p[i]);
// 		i++;
// 	}
// 	free (p);
// }
