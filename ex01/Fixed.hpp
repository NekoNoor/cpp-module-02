/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nschat <nschat@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/30 15:51:59 by nschat        #+#    #+#                 */
/*   Updated: 2022/03/17 17:45:39 by nschat        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <math.h>

class Fixed {
	public:
		Fixed();
		Fixed(const int n);
		Fixed(const float f);
		Fixed(const Fixed &obj);
		~Fixed();
		Fixed &operator=(const Fixed &obj);
		void setRawBits(int const raw);
		int getRawBits(void) const;
		float toFloat(void) const;
		int toInt(void) const;

	private:
		int _value;
		static const int _fraction = 8;
};

std::ostream &operator<<(std::ostream &os, const Fixed &obj);

#endif
