/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jordan <jordan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 18:41:02 by jordan            #+#    #+#             */
/*   Updated: 2025/12/25 19:04:04 by jordan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Point.hpp"

Point::Point()
{
	this->x.setRawBits(0);
	this->y.setRawBits(0);
}

Point::Point(const float x, const float y)
{
	Fixed fx(x);
	Fixed fy(y);

	this->x = fx;
	this->y = fy;
}

Point::Point(const Point& newPoint) : x(newPoint.x), y(newPoint.y) {}

Point& Point::operator=(const Point& other)
{
	if (this != &other)
	{
		this->x = other.x;
		this->y = other.y;
	}
	return (*this);
}

Point::~Point() {}

Fixed	Point::get_x(void) const
{
	return (this->x);
}

Fixed	Point::get_y(void)	const
{
	return (this->y);
}
