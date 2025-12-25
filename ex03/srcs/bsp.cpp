/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jordan <jordan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 18:36:00 by jordan            #+#    #+#             */
/*   Updated: 2025/12/25 19:46:58 by jordan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsp.h"

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed	res1;
	Fixed	res2;
	Fixed	res3;
	Fixed	zero;

	res1 = (c.get_x() - point.get_x()) * (a.get_y() - point.get_y()) - (c.get_y() - point.get_y()) * (a.get_x() - point.get_x());
	res2 = (a.get_x() - point.get_x()) * (b.get_y() - point.get_y()) - (a.get_y() - point.get_y()) * (b.get_x() - point.get_x());
	res3 = (b.get_x() - point.get_x()) * (c.get_y() - point.get_y()) - (b.get_y() - point.get_y()) * (c.get_x() - point.get_x());
	
	if (res1 > zero && res2 > zero && res3 > zero)
		return (1);
	else if (res1 < zero && res2 < zero && res3 < zero)
		return (1);
	else
		return (0);
}