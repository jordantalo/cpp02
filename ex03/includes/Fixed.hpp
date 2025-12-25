/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtalobre <jtalobre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 11:39:19 by jtalobre          #+#    #+#             */
/*   Updated: 2025/12/22 16:24:32 by jtalobre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include<iostream>

class Fixed
{
	private:
		static const int	fract = 8;
		int					raw;

	public:
		Fixed();
		Fixed(const int value);
		Fixed(const float value);
		Fixed(const Fixed& newFixed);
		Fixed&	operator=(const Fixed& newFixed);
		~Fixed();

		bool	operator<(const Fixed& compareFixed) const;
		bool	operator>(const Fixed& compareFixed) const;
		bool	operator>=(const Fixed& compareFixed) const;
		bool	operator<=(const Fixed& compareFixed) const;
		bool	operator==(const Fixed& compareFixed) const;
		bool	operator!=(const Fixed& compareFixed) const;

		Fixed	operator+(const Fixed& otherFixed) const;
		Fixed	operator-(const Fixed& otherFixed) const;
		Fixed	operator*(const Fixed& otherFixed) const;
		Fixed	operator/(const Fixed& otherFixed) const;
		Fixed&	operator++();
		Fixed	operator++(int);
		Fixed&	operator--();
		Fixed	operator--(int);

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;

		static Fixed&	max(Fixed& f1, Fixed& f2);
		static Fixed&	min(Fixed& f1, Fixed& f2);
		static const Fixed&	max(const Fixed& f1, const Fixed& f2);
		static const Fixed&	min(const Fixed& f1, const Fixed& f2);
		
};

std::ostream& operator<<(std::ostream& os, const Fixed& f);

#endif
