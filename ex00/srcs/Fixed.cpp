/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtalobre <jtalobre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 11:45:14 by jtalobre          #+#    #+#             */
/*   Updated: 2025/12/22 16:23:07 by jtalobre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

Fixed::Fixed() : raw(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed& newFixed) : raw(newFixed.raw)
{
	std::cout << "Copy constructor called\n";
}

Fixed& Fixed::operator=(const Fixed& toCopy)
{
	std::cout << "Copy assignment operator called\n";
	if (this != &toCopy)
	{
		this->raw = toCopy.raw;
	}
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

int	Fixed::getRawBits( void )
{
	std::cout << "getRawBits member function called\n";
	return (this->raw);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called\n";
	this->raw = raw;
}


