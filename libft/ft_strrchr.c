/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharon-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 22:27:10 by iharon-p          #+#    #+#             */
/*   Updated: 2020/02/21 00:14:14 by iharon-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int to_be_found)
{
	int		n;
	char	*backup;

	backup = (char *)str;
	n = ft_strlen(backup);
	if (str[n] == '\0' && to_be_found == '\0')
		return (&backup[n]);
	while (n--)
	{
		if (str[n] == to_be_found)
			return (&backup[n]);
	}
	return (0);
}
