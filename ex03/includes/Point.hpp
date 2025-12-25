/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jordan <jordan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 18:20:29 by jordan            #+#    #+#             */
/*   Updated: 2025/12/25 19:04:35 by jordan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "../includes/Fixed.hpp"

class Point
{
	private:
		Fixed	x;
		Fixed	y;
	
	public:
		Point();
		Point(const float x, const float y);
		Point(const Point& newPoint);
		Point& operator=(const Point& other);
		~Point();

		Fixed get_x(void) const;
		Fixed get_y(void) const;
};

#endif