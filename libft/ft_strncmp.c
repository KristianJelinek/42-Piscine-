/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: k <k@student.42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 13:17:04 by kjelinek          #+#    #+#             */
/*   Updated: 2023/09/12 13:40:04 by k                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (unsigned char)s1[i] == (unsigned char)s2[i] && s1[i] != '\0')
	{
		i++;
	}
	if (i == n || s1[i] == '\0' || s2[i] == '\0')
	{
		return 0;
	}
	else
	{
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	}
}