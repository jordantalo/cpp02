/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jordan <jordan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 13:21:46 by jtalobre          #+#    #+#             */
/*   Updated: 2025/12/25 19:50:59 by jordan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"
#include "../includes/Point.hpp"
#include "../includes/bsp.h"

int	main(void)
{
	Point	a(0.0, 0.0);
	Point	b(0.0, 2.0);
	Point	c(2.0, 0.0);
	Point	point(0.1, 0.1);

	if (bsp(a, b, c, point))
		std::cout << "Point is inside triangle abc" << std::endl;
	else
		std::cout << "Point is outside triangle abc" << std::endl;
	
	return (0);
}
