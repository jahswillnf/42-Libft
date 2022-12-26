/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahswillnf <jahswillnf@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 18:56:22 by jahswillnf        #+#    #+#             */
/*   Updated: 2022/12/22 22:32:52 by jahswillnf       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_isascii(int asc)
// returns a non zerodigit if it is an ASCII character
{
	return (asc >= 0 && asc <= 127);
}

// int main(char asc)
// {
// 	char c;

// 	asc = '\0';
// 	c = ft_isascii(asc);
// 	printf("%d\n", c);
// }
