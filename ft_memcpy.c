/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahswillnf <jahswillnf@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 16:03:50 by jahswillnf        #+#    #+#             */
/*   Updated: 2022/12/23 12:36:18 by jahswillnf       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	void	*result;

	if (!dest && !src)
		return (0);
	result = dest;
	while (n--)
		*(char *)dest++ = *(char *)src++;
	return (result);
}

// int main(void) {
//     char src[6] = "1256";
//     char dest[10] = "12345";
//     ft_memcpy(dest, src, 5);
//     printf("%s\n", dest);
// }
