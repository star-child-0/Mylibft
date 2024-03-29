/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoh.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvannin <anvannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 20:22:00 by anvannin          #+#    #+#             */
/*   Updated: 2023/03/30 20:22:00 by anvannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoh(unsigned int n, char *base)
{
	int		l;
	int		i;
	char	*str;

	l = n / 16 + 1;
	i = 0;
	str = malloc(sizeof(char) * l + 1);
	while (i < l)
	{
		str[i] = base[n % 16];
		n /= 16;
		i++;
	}
	str[l] = '\0';
	return (str);
}
