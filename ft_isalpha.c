/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrandao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 12:19:48 by abrandao          #+#    #+#             */
/*   Updated: 2026/04/15 15:08:13 by abrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}

/*#include <stdio.h>
int	main(void)
{
	printf ("%i \n", ft_isalpha('c'));
	printf ("%i \n", ft_isalpha('C'));
	printf ("%i \n", ft_isalpha('1'));
}*/
