/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahswillnf <jahswillnf@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 19:52:02 by jahswillnf        #+#    #+#             */
/*   Updated: 2022/12/23 01:10:09 by jahswillnf       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_isprint(int c)
// returns a non zero digit if it is a printable character
{
	return (c >= ' ' && c <= '~');
}

// int main(char asc)
// {
// 	char c;

// 	asc = '*';
// 	c = ft_isprint(asc);
// 	printf("%d\n", c);
// }
