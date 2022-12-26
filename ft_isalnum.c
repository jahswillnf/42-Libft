/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahswillnf <jahswillnf@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 12:02:16 by jahswillnf        #+#    #+#             */
/*   Updated: 2022/12/23 13:04:40 by jahswillnf       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

int	ft_isalnum(int alnum)
// returns a non zero digit if it is an alphanu char
{
	return (ft_isalpha(alnum) || ft_isdigit(alnum));
}

// void	main(char ret)
// {
//     char	num;

//     num = 't';
//     ret = ft_isalnum(num);
//     printf("%d\n", ret);
// }
