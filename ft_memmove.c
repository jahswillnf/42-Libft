/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahswillnf <jahswillnf@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 17:10:10 by jahswillnf        #+#    #+#             */
/*   Updated: 2022/12/23 12:36:29 by jahswillnf       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t num)
{
	void		*result;

	if (!dest && !src)
		return (0);
	result = dest;
	if (src < dest)
	{
		src += num;
		dest += num;
		while (num--)
			*(char *)--dest = *(char *)--src;
	}
	else
		while (num--)
			*(char *)dest++ = *(char *)src++;
	return (result);
}

// int main(void)
// {
//     char src[6] = "Hello!";
//     char dest[10] = "Worldl im";
//     ft_memmove(dest + 3, src, 6);
//     printf("%s\n", dest);
// }
