/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jealonso <jealonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 20:01:43 by jealonso          #+#    #+#             */
/*   Updated: 2014/11/22 20:57:28 by jealonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

size_t	ft_strlen(const char *c)
{
	size_t cmp;

	cmp = 0;
	while (c[cmp] != '\0')
		cmp++;
	return (cmp);
}