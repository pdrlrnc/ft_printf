/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mal <malory@onenetbeyond.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 13:05:54 by pedde-so          #+#    #+#             */
/*   Updated: 2025/05/27 22:39:06 by Mal              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*result;

	i = 0;
	while (*(s + i))
		i++;
	result = malloc(i + 1);
	if (result == NULL)
		return (NULL);
	i = 0;
	while (*(s + i))
	{
		*(result + i) = *(s + i);
		i++;
	}
	*(result + i) = '\0';
	return (result);
}
