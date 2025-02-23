/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 10:33:58 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/23 11:21:44 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

/*******************************************************************************
 *							CANONICAL FORM									   *
 ******************************************************************************/

/*
 *	All private not necessary to implement this all => fordibben
 */

/*******************************************************************************
 *							PRIVATE METHOD 									   *
 ******************************************************************************/

/*
 *	convertChar convert the input to char
 */
void	ScalarConverter::convertChar( double input )
{
	std::cout << "char: ";
	if (std::isnan(input) || std::isinf(input) || input < 32 || input > 127)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "'" << static_cast<char>(input) << "'" << std::endl;
	return ;
}

/*
 *	convertInt convert the input to int
 */
void	ScalarConverter::convertInt( double input )
{
	std::cout << "int: ";
	if (std::isnan(input) || std::isinf(input) || input < std::numeric_limits<int>::min() || input > std::numeric_limits<int>::max())
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(input) << std::endl;
	return ;
}

/*
 *	convertFloat convert the input to float
 */
void	ScalarConverter::convertFloat( double input )
{
	std::cout << "float: ";
	if (std::isnan(input) || std::isinf(input))
		std::cout << "nanf" << std::endl;
	else
		std::cout << std::fixed << std::setprecision(1) << static_cast<float>(input) << "f" << std::endl;
	return ;
}

/*
 *	convertDouble convert the input to double
 */
void	ScalarConverter::convertDouble( double input )
{
	std::cout << "double: ";
	if (std::isnan(input) || std::isinf(input))
		std::cout << "nan" << std::endl;
	else
		std::cout << std::fixed << std::setprecision(1) << input << std::endl;
	return ;
}

/*******************************************************************************
 *								METHOD 										   *
 ******************************************************************************/

void	ScalarConverter::convert( const std::string &input )
{
	double	value;
	char	*endptr;

	value = std::strtod(input.c_str(), &endptr);
	convertChar(value);
	convertInt(value);
	convertFloat(value);
	convertDouble(value);
	return ;
}
