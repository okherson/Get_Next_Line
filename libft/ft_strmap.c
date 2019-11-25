/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okherson <okherson@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 18:08:00 by okherson          #+#    #+#             */
/*   Updated: 2018/12/03 11:08:44 by okherson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*map;

	i = 0;
	if (s == NULL)
		return (NULL);
	map = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!map)
		return (NULL);
	while (s && s[i] != '\0' && f)
	{
		map[i] = f(s[i]);
		i++;
	}
	map[i] = '\0';
	return (map);
}
