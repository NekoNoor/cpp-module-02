/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nschat <nschat@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/30 15:58:19 by nschat        #+#    #+#                 */
/*   Updated: 2021/11/30 18:39:22 by nschat        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	this->_value = 0;
}

Fixed::Fixed(const int n) {
	std::cout << "Int constructor called" << std::endl;
	this->_value = n << this->_fraction;
}

Fixed::Fixed(const float f) {
	std::cout << "Float constructor called" << std::endl;
	//TODO: floats??
}

Fixed::Fixed(const Fixed &obj) : _value(obj._value) {
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

void Fixed::setRawBits(int raw) {
	std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

float Fixed::toFloat(void) const {
	std::cout << "toFloat member function called" << std::endl;
	//TODO: floats??
}

int Fixed::toInt(void) const {
	std::cout << "toInt member function called" << std::endl;
	return (this->_value >> this->_fraction);
}

Fixed &Fixed::operator=(const Fixed &obj) {
	std::cout << "Assignation operator called" << std::endl;
	this->_value = obj.getRawBits();
	return (*this);
}

std::ostream &operator<<(std::ostream &os, const Fixed &obj) {
	os << obj.toFloat();
	return (os);
}
