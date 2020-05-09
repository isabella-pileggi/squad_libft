/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharon-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 20:29:05 by iharon-p          #+#    #+#             */
/*   Updated: 2020/03/12 22:17:57 by iharon-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (*needle < 1)
		return ((char *)haystack);
	while (haystack[i] && len > 0)
	{
		if (i != len && haystack[i] != needle[j])
			i++;
		if (haystack[i] == needle[j])
		{
			while (i != len && haystack[i] == needle[j] && needle[j] && len > 0)
			{
				i++;
				j++;
			}
			if (needle[j] == '\0')
				return ((char *)&haystack[i - j]);
			return (NULL);
		}
	}
	return (0);
}
