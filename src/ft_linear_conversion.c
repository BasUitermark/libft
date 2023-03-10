/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_linear_conversion.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/10 16:44:31 by buiterma      #+#    #+#                 */
/*   Updated: 2023/03/10 16:44:44 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

double	ft_linear_conversion(t_dpos old, t_dpos new, double old_value)
{
	double	new_value;
	double	old_range;
	double	new_range;

	old_range = (old.y - old.x);
	new_range = (new.y - new.x);
	new_value = (((old_value - old.x) * new_range) / old_range) + new.x;
	return (new_value);
}
