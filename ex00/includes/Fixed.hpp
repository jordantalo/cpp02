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
		Fixed(const Fixed& newFixed);
		Fixed& operator=(const Fixed& newFixed);
		~Fixed();

		int		getRawBits( void );
		void	setRawBits( int const raw );
};

#endif
