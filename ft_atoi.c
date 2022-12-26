/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahswillnf <jahswillnf@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 15:42:25 by jahswillnf        #+#    #+#             */
/*   Updated: 2022/12/23 19:29:36 by jahswillnf       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <limits.h>
#include "libft.h"

int	ft_atoi(const char *nptr)
{
	long	result;
	int		sign;

	result = 0;
	sign = 1;
	while (*nptr == '\t' || *nptr == '\n' || *nptr == '\v'
		|| *nptr == '\f' || *nptr == '\r' || *nptr == ' ')
		++nptr;
	if (*nptr == '+' || *nptr == '-')
		if (*(nptr++) == '-')
				sign *= -1;
	while (ft_isdigit(*nptr))
	{
		result = result * 10 + (*nptr++ - '0');
	}
	return ((int)result * sign);
}

// int	main(void)
// {
//   char	str[] = "  -4";
//   int	num;

//   num = ft_atoi(str);

//   printf("The integer value of '%s' is %d\n", str, num);
// }
