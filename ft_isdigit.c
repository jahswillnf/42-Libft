/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahswillnf <jahswillnf@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 23:53:32 by jahswillnf        #+#    #+#             */
/*   Updated: 2022/12/23 01:06:53 by jahswillnf       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_isdigit(int value)
{
	return (value >= '0' && value <= '9');
}

// int	main(int value)
// {
// 	int	num;

// 	value = 897;
// 	num = ft_isdigit(value);
// 	printf("%d\n", num);
// }
