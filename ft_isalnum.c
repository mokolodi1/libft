/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 23:03:14 by tfleming          #+#    #+#             */
/*   Updated: 2014/11/04 23:16:12 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include		"ft_lib.h"

int				ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}