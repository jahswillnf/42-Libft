/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahswillnf <jahswillnf@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 01:06:45 by jahswillnf        #+#    #+#             */
/*   Updated: 2022/12/25 01:24:24 by jahswillnf       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		++i;
	}
}

// void toupper_at_even(unsigned int i, char *c)
// {
//     if (i % 2 == 0)
//         *c = (char)ft_toupper(*c);
// }

// int main(void)
// {
//     char s[] = "hello";

//     ft_striteri(s, toupper_at_even);
//     printf("%s\n", s);  // prints "HeLlO"
// }
