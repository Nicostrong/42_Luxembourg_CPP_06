/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 10:33:20 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/23 11:26:48 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main( void )
{
	std::string	input1 = "0";
	std::string	input2 = "42.0f";
	std::string	input3 = "42.0";
	std::string	input4 = "nan";
	std::string	input5 = "nanf";
	std::string	input6 = "inff";
	std::string	input7 = "-inff";
	std::string	input8 = "+inf";
	
	std::cout << "Input: " << input1 << std::endl;
	ScalarConverter::convert(input1);
	std::cout << std::endl << "Input: " << input2 << std::endl;
	ScalarConverter::convert(input2);
	std::cout << std::endl << "Input: " << input3 << std::endl;
	ScalarConverter::convert(input3);
	std::cout << std::endl << "Input: " << input4 << std::endl;
	ScalarConverter::convert(input4);
	std::cout << std::endl << "Input: " << input5 << std::endl;
	ScalarConverter::convert(input5);
	std::cout << std::endl << "Input: " << input6 << std::endl;
	ScalarConverter::convert(input6);
	std::cout << std::endl << "Input: " << input7 << std::endl;
	ScalarConverter::convert(input7);
	std::cout << std::endl << "Input: " << input8 << std::endl;
	ScalarConverter::convert(input8);
	
	return (0);
}