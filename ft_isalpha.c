/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahswillnf <jahswillnf@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 21:35:42 by jahswillnf        #+#    #+#             */
/*   Updated: 2022/12/23 01:06:19 by jahswillnf       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_isalpha(int alpha)
{
	return ((alpha >= 'A' && alpha <= 'Z')
		|| (alpha >= 'a' && alpha <= 'z'));
}

// int	main( char alpha)
// {
// 	char	letter;

// 	letter = '+';
// 	alpha = ft_isalpha(letter);

// 	if (alpha == 1)
// 	{
// 		printf("%c is an alphabet\n", letter);
// 	}
// 	else
// 		printf("%c is not an alphabet\n", letter);
// }
