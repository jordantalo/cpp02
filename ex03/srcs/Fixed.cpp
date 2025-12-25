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
#include<cmath>

Fixed::Fixed() : raw(0) {}

Fixed::Fixed(const int value)
{
	this->raw = (int)(value * (1 << this->fract));
}

Fixed::Fixed(const float value)
{
	this->raw = roundf(value * (1 << this->fract));
}

Fixed::Fixed(const Fixed& newFixed) : raw(newFixed.raw) {}

Fixed& Fixed::operator=(const Fixed& toCopy)
{
	if (this != &toCopy)
	{
		this->raw = toCopy.raw;
	}
	return (*this);
}

Fixed::~Fixed() {}

int	Fixed::getRawBits( void ) const
{
	return (this->raw);
}

void	Fixed::setRawBits(int const raw)
{
	this->raw = raw;
}

float	Fixed::toFloat( void ) const
{
	return (float)this->raw / (1 << this->fract);
}

int	Fixed::toInt( void ) const
{
	return (int)this->raw  / (1 << this->fract);
}

bool	Fixed::operator<(const Fixed& compareFixed) const
{
	return (this->raw < compareFixed.raw);
}

bool	Fixed::operator>(const Fixed& compareFixed) const
{
	return (this->raw > compareFixed.raw);
}

bool	Fixed::operator>=(const Fixed& compareFixed) const
{
	return (this->raw >= compareFixed.raw);
}

bool	Fixed::operator<=(const Fixed& compareFixed) const
{
	return (this->raw <= compareFixed.raw);
}

bool	Fixed::operator==(const Fixed& compareFixed) const
{
	return (this->raw == compareFixed.raw);
}

bool	Fixed::operator!=(const Fixed& compareFixed) const
{
	return (this->raw != compareFixed.raw);
}

Fixed	Fixed::operator+(const Fixed& otherFixed) const
{
	int		addRaw;
	Fixed	result;

	addRaw = this->raw + otherFixed.raw;
	result.setRawBits(addRaw);
	return (result);
}

Fixed	Fixed::operator-(const Fixed& otherFixed) const
{
	int		substractRaw;
	Fixed	result;

	substractRaw = this->raw - otherFixed.raw;
	result.setRawBits(substractRaw);
	return (result);
}

Fixed	Fixed::operator*(const Fixed& otherFixed) const
{
	int		timeRaw;
	Fixed	result;

	timeRaw = (this->raw * otherFixed.raw) / (1 << this->fract);
	result.setRawBits(timeRaw);
	return (result);
}

Fixed	Fixed::operator/(const Fixed& otherFixed) const
{
	int		divideRaw;
	Fixed	result;

	divideRaw = ((this->raw << fract) / otherFixed.raw);
	result.setRawBits(divideRaw);
	return (result);
}

Fixed&	Fixed::operator++()
{
	this->raw += 1;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp;

	tmp = *this;
	this->raw += 1;
	return (tmp);
}

Fixed&	Fixed::operator--()
{
	this->raw -= 1;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp;

	tmp = *this;
	this->raw -= 1;
	return (tmp);
}

Fixed&	Fixed::min(Fixed& f1, Fixed& f2)
{
	if (f1 < f2)
		return (f1);
	else
		return (f2);
}

const Fixed&	Fixed::min(const Fixed& f1, const Fixed& f2)
{
	if (f1 < f2)
		return (f1);
	else
		return (f2);
}

Fixed&	Fixed::max(Fixed& f1, Fixed& f2)
{
	if (f1 > f2)
		return (f1);
	else
		return (f2);
}

const Fixed&	Fixed::max(const Fixed& f1, const Fixed& f2)
{
	if (f1 > f2)
		return (f1);
	else
		return (f2);
}

std::ostream& operator<<(std::ostream& os, const Fixed& f)
{
	os << f.toFloat();
	return (os);
}

